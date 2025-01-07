

#include <iostream>
using namespace std;
class frequent_flyer_club {
private:
	string customer_name;
	string destination_airport_iata_code;
	int total_mileage;
	float this_flight_mileage;
	float club_point;
	static const string specialairports[4];

public:

	frequent_flyer_club(string c) {
		customer_name=c;
		this_flight_mileage=0;
		club_point=0;
	}
	void new_flight(string d,int m) {
		destination_airport_iata_code=d;
		this_flight_mileage=m;
		string phase_look="ond";
		bool is_special=false;
		for(int i=0; i<4; i++) {
			if(destination_airport_iata_code==specialairports[i]) {
				//cout<<"exists";
				is_special=true;
				break;
			}
		}
		total_mileage+=this_flight_mileage;

		if(this_flight_mileage>1000) {

			if(is_special) {
			    
			    //cout<<(this_flight_mileage/1000)<<endl;
			    
				club_point += (this_flight_mileage/1000)*(10*1.2);

			} else {
				club_point += (this_flight_mileage/1000)*10;
			}

		}}
		int get_total_mileage(){
		    return total_mileage;
		}
		float get_club_points(){
		    return club_point;
		}

	};

	const string frequent_flyer_club::specialairports[4]= {"IKA","DOH","LAX","TKY"};

	int main()
	{
        frequent_flyer_club shei("shei");
        shei.new_flight("SVO",5000);
        shei.new_flight("TKY",900);
        shei.new_flight("IKA",1500);
        cout<<"club point:"<<shei.get_club_points()<<endl;
        
		return 0;
	}
