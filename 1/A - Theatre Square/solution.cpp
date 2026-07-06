#include <iostream>
 
int main() {
    long long n, m, a;
    std::cin >> n >> m >> a;
    
    long long length_count = (n + a - 1) / a;
    long long width_count = (m + a - 1) / a;
    
    long long total_flagstones = length_count * width_count;
    
    std::cout << total_flagstones << std::endl;
    
    return 0;
}