#include"scan.h"
#include"Huffman.h"
using namespace std;
int main()
{
	string ifile("Source core");
	string ofile("HFM core");
	scan a;
	a.run(ifile);//ɨ���ļ���ͳ����ĸƵ��
	Huffman b(a.tmp);//������������
	b.encode(ifile,ofile);//����
	b.decode(ofile,"decode");
	system("pause");
	return 0;
}