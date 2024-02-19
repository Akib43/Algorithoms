#include <iostream>
using namespace std;

const int max_items = 5;
const int max_days = 7;
const int max_sales = 1000;


void calc_sales(double sales_price[][max_items], int sales_qty[][max_items], double total[]) {
    for (int day = 0; day < max_days; ++day) {
        for (int item = 0; item < max_items; ++item) {
            total[day] += sales_price[day][item] * sales_qty[day][item];
        }
    }
}

double calc_avg_qty(int sales_qty[][max_items]) {
    double total_qty = 0;
    for (int day = 0; day < max_days; ++day) {
        for (int item = 0; item < max_items; ++item) {
            total_qty += sales_qty[day][item];
        }
    }
    return total_qty / (max_days * max_items);
}

void display(double total[], double avg_qty) {
    double total_income = 0;
    cout << "\ntotal sales for each day:" << endl;
    for (int i = 0; i < max_days; ++i) {
        cout << "day " << i + 1 << ": $" << total[i] << endl;
        total_income += total[i];
    }

    cout << "\ntotal income for 7 days: $" << total_income << endl;
    cout << "average sales quantity for 7 days: " << avg_qty << endl;
}

int main() {
    double sales_price[max_days][max_items];
    int sales_qty[max_days][max_items];
    double total_sales[max_days] = {0};

    for (int day = 0; day < max_days; ++day) {
        cout << "day " << day + 1 << ":\n";
        for (int item = 0; item < max_items; ++item) {
            cout << "enter sales unit price for item " << item + 1 << ": ";
            cin >> sales_price[day][item];

            cout << "enter sales quantity for item " << item + 1 << ": ";
            cin >> sales_qty[day][item];

            if (sales_price[day][item] < 0 || sales_price[day][item] > max_sales ||
                sales_qty[day][item] < 0 || sales_qty[day][item] > max_sales) {
                cout << "invalid input! sales unit price and sales quantity must be between 0 and 1000." << endl;
                exit(1);
            }
        }
    }
    calc_sales(sales_price, sales_qty, total_sales);
    double avg_sales_qty = calc_avg_qty(sales_qty);
    display(total_sales, avg_sales_qty);

    return 0;
}
