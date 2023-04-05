//https://freetuts.net/de-quy-tuyen-tinh-2946.html
#include <iostream>
using namespace std;
 
//hàm đệ quy tuyến tính
int factorial(int n){
  if(n == 0) return 1; // điểm dừng của hàm, nếu n == 0 thì kết thúc hàm và trả về 1
  return n * factorial(n-1);
}
