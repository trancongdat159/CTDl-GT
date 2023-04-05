//https://blog.luyencode.net/hang-doi-trong-cpp/
#include <iostream>
const int MAX = 1e5; // Kích cỡ lớn nhất của hàng đợi, biến này có thể thay đổi tùy vào bạn
template<typename T> class Queue // Xây dựng hàng đợi
{
 T base[MAX]; // Mảng base lưu trữ thông tin
 T *a = base; // Con trỏ của mảng base
 int size = 0;
 public:
 Queue() // Hàm khởi tạo
 {
 
 }
 void Enqueue(T x) // Thêm 1 phần tử vào đầu hàng đợi
 {
 a[size] = x; // Đặt x vào cuối hàng đợi
 size++; // Tăng kích thước hàng đợi lên 1
 }
 void Dequeue() // Loại bỏ phần tử ở đầu hàng đợi
 {
 ++a; // Loại bỏ phần tử ở đầu hàng đợi
 size--; // Giảm kích cỡ hàng đợi đi 1
 }
 bool isEmpty() // Kiểm tra hàng đợi có rỗng hay không
 {
 return size > 0; // Kiểm tra kích cỡ có lớn hơn 0 hay không?
 }
 T front() // Trả về phần tử ở đầu hàng đợi
 {
 return a[0];
 }
};
