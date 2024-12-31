#include <iostream>
#include <vector>
#include <string>

class Club {
private:
    std::string customer_name;        // نام مشتری
    std::string origin_airport_iata_code; // کد فرودگاه مبدا
    int total_mileage;                // مجموع مایل‌های طی شده
    int total_points;                 // امتیاز باشگاه
    std::vector<std::string> special_airports; // لیست فرودگاه‌های خاص (که ۲۰٪ بیشتر امتیاز می‌دهند)
    
public:
    // سازنده کلاس
    Club(std::string name) {
        customer_name = name;
        origin_airport_iata_code = "Any";  // فرض میکنیم مبدا همیشه یکسان است
        total_mileage = 0;
        total_points = 0;
    }

    // تابعی برای ثبت پرواز جدید
    void new_flight(std::string destination, int mileage) {
        // بررسی فرودگاه‌های خاص برای ۲۰٪ بیشتر امتیاز
        bool is_special_airport = false;
        for (const std::string& airport : special_airports) {
            if (destination == airport) {
                is_special_airport = true;
                break;
            }
        }

        // محاسبه امتیاز بر اساس مقصد و مایل‌ها
        int flight_points = 0;
        if (mileage >= 1000) {
            flight_points = (mileage / 1000) * 10; // برای هر ۱۰۰۰ مایل ۱۰ امتیاز
            if (is_special_airport) {
                flight_points = flight_points + (flight_points / 5); // ۲۰٪ بیشتر امتیاز
            }
        }

        // به روزرسانی داده‌های مشتری
        total_mileage += mileage;
        total_points += flight_points;
    }

    // تابعی برای اضافه کردن فرودگاه‌های خاص
    void add_special_airports(const std::vector<std::string>& airports) {
        special_airports = airports;
    }

    // تابعی برای نمایش مجموع مایل‌های طی شده
    void show_total_mileage() const {
        std::cout << "Total mileage for " << customer_name << ": " << total_mileage << " miles." << std::endl;
    }

    // تابعی برای نمایش امتیاز باشگاه
    void show_total_points() const {
        std::cout << "Total club points for " << customer_name << ": " << total_points << " points." << std::endl;
    }
};

int main() {
    // ایجاد یک شی از کلاس Club برای مشتری "Shida"
    Club h1("Mobi");

    // اضافه کردن فرودگاه‌های خاص که ۲۰٪ بیشتر امتیاز می‌دهند
    h1.add_special_airports({"LAX", "JFK", "ATL"});

    // ثبت پروازهای مختلف برای مشتری
    h1.new_flight("LAX", 2000);  // پرواز به LAX با ۲۰۰۰ مایل
    h1.new_flight("JFK", 1500);  // پرواز به JFK با ۱۵۰۰ مایل
    h1.new_flight("ORD", 500);   // پرواز به ORD با ۵۰۰ مایل

    // نمایش مجموع مایل‌ها و امتیازها
    h1.show_total_mileage();
    h1.show_total_points();

    return 0;
}
