#include <bits/stdc++.h>
#include "unitlib.h" // 引入转换库的头文件

using namespace std;

int main() {
    int choice;
    double val;
    
    while(true) {
        cout << "\n===== 单位转换器 =====\n";
        cout << "1. 摄氏度转华氏度  2. 华氏度转摄氏度\n";
        cout << "3. 米转英尺        4. 英尺转米\n";
        cout << "5. 磅转千克        6. 千克转磅\n";
        cout << "0. 退出\n请选择: ";
        cin >> choice;
        
        if(choice == 0) break;
        if(choice >= 1 && choice <= 6) {
            cout << "请输入数值: ";
            cin >> val;
        }
        
        switch(choice) {
            case 1: cout << "结果: " << celsiusToFahrenheit(val) << endl; break;
            case 2: cout << "结果: " << fahrenheitToCelsius(val) << endl; break;
            case 3: cout << "结果: " << metersToFeet(val) << endl; break;
            case 4: cout << "结果: " << feetToMeters(val) << endl; break;
            case 5: cout << "结果: " << poundsToKg(val) << endl; break;
            case 6: cout << "结果: " << kgToPounds(val) << endl; break;
            default: cout << "输入无效！" << endl;
        }
    }
    return 0;
}