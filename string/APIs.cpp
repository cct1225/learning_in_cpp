#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
string http_url = "http://tigercosmos.xyz/about/";

// 從位置 4 地方插入，也就是 p 的下一個位置，得到 https://tigercosmos.xyz/about/
http_url.insert(4, "s"); 

// 檢查位置 0 到 5 的子字串
assert(http_url.substr(0, 5) == "https");

// 檢查字串是否包含 "about"
assert(http_url.contains("about") == true);

// 找到 "xyz" 子字串的開頭位置
size_t pos = http_url.find("xyz");
// 從剛剛找到的 pos 位置，取代三個字元，換成 "co.jp"，於是得到 https://tigercosmos.co.jp/about/
http_url.replace(pos, 3, "co.jp");

}