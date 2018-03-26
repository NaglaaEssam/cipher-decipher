#include <iostream>

using namespace std;

int main()
{
    int lst[]={1,2,3,4,5,6,7,8,9};
    int player1;
    int player2;
    int sum2=0,sum22=0,sum222=0,sum2222=0;
    int sum1=0,sum11=0,sum111=0,sum1111=0,sum16=0,sum17=0,sum15=0;
    int nums1[5];
    int nums2[4];
    for(int i=0;i<5;i++){
        cout<<"Enter num1"<<endl;
        cin>>player1;
        while(player1<=0 || player1>9 || lst[player1-1]==-1){
          cout<<"enter num1"<<endl;
          cin>>player1;
        }
        nums1[i]=player1;
        lst[(player1)-1]=(-1);
        sum1=nums1[0]+nums1[1]+nums1[2];
        sum11=nums1[0]+nums1[1]+nums1[3];
        sum111=nums1[1]+nums1[2]+nums1[3];
        sum1111=nums1[0]+nums1[2]+nums1[3];
        sum15=nums1[2]+nums1[3]+nums1[4];
        sum16=nums1[1]+nums1[3]+nums1[4];
        sum17=nums1[1]+nums1[2]+nums1[4];
       // if((sum1!=15||sum11!=15||sum111!=15 ||sum1111!=15||sum15!=15||sum16!=15||sum17!=15)&&(sum2!=15 || sum22!=15 || sum222!=15 || sum2222!=15)){

        if( sum1==15||sum11==15||sum111==15 ||sum1111==15||sum15==15||sum16==15||sum17==15){
           //cout<<"draw"<<endl;
           cout<<"player1 is winner"<<endl;
           break;
           }
        else
            return 0;
        //if((sum1!=15||sum11!=15||sum111!=15 ||sum1111!=15||sum15!=15||sum16!=15||sum17!=15)&&(sum2!=15 || sum22!=15 || sum222!=15 || sum2222!=15)){
          //  cout<<"player1 "<<endl;
           // return 0;

        ///}
        cout<<"enter num2"<<endl;
        cin>>player2;
        while(player2<=0 || player2>9 || lst[player2-1]==-1){
               cout<<"Enter num2"<<endl;
               cin>>player2;
        }
        nums2[i]=player2;
        lst[(player2)-1]=(-1);
        sum2=nums2[0]+nums2[1]+nums2[2];
        sum22=nums2[0]+nums2[1]+nums2[3];
        sum222=nums2[1]+nums2[2]+nums2[3];
        sum2222=nums2[0]+nums2[2]+nums2[3];
        if(sum2==15 || sum22==15 || sum222==15 || sum2222==15){
            cout<<"player2 is winner"<<endl;
            break;
        }

        }

    return 0;
}
