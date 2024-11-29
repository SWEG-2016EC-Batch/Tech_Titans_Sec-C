#include <iostream>

using namespace std;

int main()
{
   const int transmission_per_sec=960;
   long long file_size;
   cout<<"enter the file size in bytes:";
   cin>>file_size;
   long long total_second,day,hour,minute,second;
   total_second=file_size/transmission_per_sec;
   day=total_second/(24*3600);
   total_second=total_second%(24*3600);
   hour=total_second/3600;
   total_second=total_second%3600;
   minute=total_second/60;
   second=total_second%60;
   cout<<"It will take "<<day<<"day:"<<hour<<"hour:"<<minute<<"minute:"<<second<<"second";
   return 0;

}
