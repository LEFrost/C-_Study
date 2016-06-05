#include"scan.h"
#include"Huffman.h"
using namespace std;
int main()
{
	string ifile("Source core");
	string ofile("HFM core");
	scan a;
	a.run(ifile);//扫描文件，统计字母频率
	Huffman b(a.tmp);//建立霍夫曼树
	b.encode(ifile,ofile);//编码
	b.decode(ofile,"decode");
	system("pause");
	return 0;
}