#include"scan.h"
#include"Huffman.h"
using namespace std;
int main()
{
	string ifile("g:\\yu.txt");
	string ofile("g:\\kai.txt");
	scan a;
	a.run(ifile);//ɨ���ļ���ͳ����ĸƵ��
	Huffman b(a.tmp);//������������
	b.encode(ifile,ofile);//����
	b.decode(ofile,"g:\\yukai.txt");
	system("pause");
	return 0;
}