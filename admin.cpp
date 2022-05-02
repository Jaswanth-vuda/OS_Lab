#include<iostream>
#include<fstream>
#include<vector>
#include<sstream>
using namespace std;

int main(){
	while(1){
		fstream f1;
		fstream f2;
		fstream f3;
		fstream f4;
		fstream fm;
		string line;
		f1.open("/home/f1/f1.txt");
		f2.open("/home/f2/f2.txt");
		f3.open("/home/f3/f3.txt");
		f4.open("/home/f4/f4.txt");
		//fm.open("marks.txt");
		printf("1 - Display\n2 - Update\n3 - Edit marks\n4 - logout\n");
		int x;
		cin>>x;
		vector<vector<int>> res(4,vector<int>(4));
		int i=0,j;
		int sum = 0;
		switch(x){
			case 1:{
				
				f1.seekg(0,ios::beg);
				i=0;
				getline(f1,line);
				while(f1){
					getline(f1,line);
					stringstream ssin(line);
					vector<string> v(5,"0");
					string tmp;
					while(ssin.good() && i<5){
						ssin>>v[i];
						if(i > 0){
							res[0][i-1] = stoi(v[i]);
						}
						i++;
					} 
					//res[0][i] = line;
					//i++;
					//if(i==4)
					//	break;
				}
				i = 0;
				f2.seekg(0,ios::beg);
				getline(f2,line);
				while(f2){
					getline(f2,line);
					stringstream ssin(line);
					vector<string> v(5,"0");
					string tmp;
					while(ssin.good() && i<5){
						ssin>>v[i];
						if(i > 0){
							res[1][i-1] = stoi(v[i]);
						}
						i++;
					} 
					//res[1][i] = line;
					//i++;
					//if(i==4)
						//break;
				}
				i = 0;
				f3.seekg(0,ios::beg);
				getline(f3,line);
				while(f3){
					getline(f3,line);
					stringstream ssin(line);
					vector<string> v(5,"0");
					string tmp;
					while(ssin.good() && i<5){
						ssin>>v[i];
						if(i > 0){
							res[2][i-1] = stoi(v[i]);
						}
						i++;
					} 
					//res[2][i] = line;
					//i++;
					//if(i==4)
						//break;
				}
				i = 0;
				f4.seekg(0,ios::beg);
				getline(f4,line);
				while(f4){
					getline(f4,line);
					stringstream ssin(line);
					vector<string> v(5,"0");
					string tmp;
					while(ssin.good() && i<5){
						ssin>>v[i];
						if(i > 0){
							res[3][i-1] = stoi(v[i]);
						}
						i++;
					} 
					//res[3][i] = line;
					//i++;
					//if(i==4)
						//break;
				}
				fm.open("marks.txt",ios::trunc | ios::out | ios::in);
			/*	cout<<"   f1  f2  f3  f4"<<endl;
				//for(int i=0;i<2;i++){
				i=0;
				while(fm){
					cout<<"s"<<i+1<<" ";
					for(int j=0;j<4;j++){
						fm<<res[j][i]<<endl;
						cout<<res[j][i]<<"  ";
					}
					i++;
					cout<<endl;
					fm<<endl;
					if(i==4)
						break;
				}
				*/
				cout<<"\tf1\tf2\tf3\tf4\ttotal"<<endl;
				//for(int i=0;i<2;i++){
				i=0;
				int sum =0;
				fm<<"\tf1\tf2\tf3\tf4\ttotal"<<endl;
				while(fm){
					cout<<"s"<<i+1<<"\t";
					fm<<"s"+to_string(i+1)+"\t";
					for(int j=0;j<4;j++){
						fm<<res[j][i]<<"\t";
						cout<<res[j][i]<<"\t";
						sum += res[j][i];
					}
					i++;
					cout<<sum<<endl;
					//cout<<endl;
					fm<<sum<<endl;
					sum = 0;
					if(i==4){
						//cout<<sum<<endl;
						//fm<<sum<<endl;
						//sum = 0;
						break;
					}
				}
				
				fm.close();
				f1.close();
				f2.close();
				f3.close();
				f4.close();
				break;
				}
			case 2:
					
				f1.seekg(0,ios::beg);
				i=0;
				getline(f1,line);
				while(f1){
					getline(f1,line);
					stringstream ssin(line);
					vector<string> v(5,"0");
					string tmp;
					while(ssin.good() && i<5){
						ssin>>v[i];
						if(i > 0){
							res[0][i-1] = stoi(v[i]);
						}
						i++;
					} 
					//res[0][i] = line;
					//i++;
					//if(i==4)
					//	break;
				}
				i = 0;
				f2.seekg(0,ios::beg);
				getline(f2,line);
				while(f2){
					getline(f2,line);
					stringstream ssin(line);
					vector<string> v(5,"0");
					string tmp;
					while(ssin.good() && i<5){
						ssin>>v[i];
						if(i > 0){
							res[1][i-1] = stoi(v[i]);
						}
						i++;
					} 
					//res[1][i] = line;
					//i++;
					//if(i==4)
						//break;
				}
				i = 0;
				f3.seekg(0,ios::beg);
				getline(f3,line);
				while(f3){
					getline(f3,line);
					stringstream ssin(line);
					vector<string> v(5,"0");
					string tmp;
					while(ssin.good() && i<5){
						ssin>>v[i];
						if(i > 0){
							res[2][i-1] = stoi(v[i]);
						}
						i++;
					} 
					//res[2][i] = line;
					//i++;
					//if(i==4)
						//break;
				}
				i = 0;
				f4.seekg(0,ios::beg);
				getline(f4,line);
				while(f4){
					getline(f4,line);
					stringstream ssin(line);
					vector<string> v(5,"0");
					string tmp;
					while(ssin.good() && i<5){
						ssin>>v[i];
						if(i > 0){
							res[3][i-1] = stoi(v[i]);
						}
						i++;
					} 
					//res[3][i] = line;
					//i++;
					//if(i==4)
						//break;
				}
					
			/*	f1.seekg(0,ios::beg);
				i=0;
				//getline(f1,line);
				while(f1){
					getline(f1,line);
					res[0][i] = line;
					i++;
					if(i==4)
						break;
				}
				i = 0;
				f2.seekg(0,ios::beg);
				while(f2){
					getline(f2,line);
					res[1][i] = line;
					i++;
					if(i==4)
						break;
				}
				i = 0;
				f3.seekg(0,ios::beg);
				while(f3){
					getline(f3,line);
					res[2][i] = line;
					i++;
					if(i==4)
						break;
				}
				i = 0;
				f4.seekg(0,ios::beg);
				while(f4){
					getline(f4,line);
					res[3][i] = line;
					i++;
					if(i==4)
						break;
				}*/
				f4.close();
				f3.close();
				f2.close();
				f1.close();
				f1.open("/home/s1/s1.txt",ios::trunc|ios::out|ios::in);
				j = 0;
				sum=0;
				f1<<"\tc1\tc2\tc3\tc4\ttotal\ns1\t";
				while(f1){
					f1<<res[j][0]<<"\t";
					sum += (res[j][0]);
					j++;
					if(j == 4){
						f1<<sum<<endl;
						sum = 0;
						break;
					}
				}
				
				f2.open("/home/s2/s2.txt",ios::trunc|ios::out|ios::in);
				j = 0;
				f2<<"\tc1\tc2\tc3\tc4\ttotal\ns2\t";
				while(f2){
					f2<<res[j][1]<<"\t";
					sum += (res[j][1]);
					j++;
					if(j == 4){
						f2<<sum<<endl;
						sum = 0;
						break;
					}
				}
				f3.open("/home/s3/s3.txt",ios::trunc|ios::out|ios::in);
				j = 0;
				f3<<"\tc1\tc2\tc3\tc4\ttotal\ns3\t";
			 		
				while(f3){
					f3<<res[j][2]<<"\t";
					sum += (res[j][2]);
					j++;
					if(j == 4){
						f3<<sum<<endl;
						sum = 0;
						break;
					}
				}
				f4.open("/home/s4/s4.txt",ios::trunc|ios::out|ios::in);
				j = 0;
				f4<<"\tc1\tc2\tc3\tc4\ttotal\ns4\t";
				while(f4){
					f4<<res[j][3]<<"\t";
					sum += (res[j][3]);
					j++;
					if(j == 4){
						f4<<sum<<endl;
						sum = 0;
						break;
					}
				}
				f1.close();
				f2.close();
				f3.close();
				f4.close();
				break;
			case 3:
				{

				
				f1.seekg(0,ios::beg);
				i=0;
				getline(f1,line);
				while(f1){
					getline(f1,line);
					stringstream ssin(line);
					vector<string> v(5,"0");
					string tmp;
					while(ssin.good() && i<5){
						ssin>>v[i];
						if(i > 0){
							res[0][i-1] = stoi(v[i]);
						}
						i++;
					} 
					//res[0][i] = line;
					//i++;
					//if(i==4)
					//	break;
				}
				i = 0;
				f2.seekg(0,ios::beg);
				getline(f2,line);
				while(f2){
					getline(f2,line);
					stringstream ssin(line);
					vector<string> v(5,"0");
					string tmp;
					while(ssin.good() && i<5){
						ssin>>v[i];
						if(i > 0){
							res[1][i-1] = stoi(v[i]);
						}
						i++;
					} 
					//res[1][i] = line;
					//i++;
					//if(i==4)
						//break;
				}
				i = 0;
				f3.seekg(0,ios::beg);
				getline(f3,line);
				while(f3){
					getline(f3,line);
					stringstream ssin(line);
					vector<string> v(5,"0");
					string tmp;
					while(ssin.good() && i<5){
						ssin>>v[i];
						if(i > 0){
							res[2][i-1] = stoi(v[i]);
						}
						i++;
					} 
					//res[2][i] = line;
					//i++;
					//if(i==4)
						//break;
				}
				i = 0;
				f4.seekg(0,ios::beg);
				getline(f4,line);
				while(f4){
					getline(f4,line);
					stringstream ssin(line);
					vector<string> v(5,"0");
					string tmp;
					while(ssin.good() && i<5){
						ssin>>v[i];
						if(i > 0){
							res[3][i-1] = stoi(v[i]);
						}
						i++;
					} 
					//res[3][i] = line;
					//i++;
					//if(i==4)
						//break;
				}

				
		/*		f1.seekg(0,ios::beg);
				i=0;
				//getline(f1,line);
				while(f1){
					getline(f1,line);
					res[0][i] = line;
					i++;
					if(i==4)
						break;
				}
				i = 0;
				f2.seekg(0,ios::beg);
				while(f2){
					getline(f2,line);
					res[1][i] = line;
					i++;
					if(i==4)
						break;
				}
				i = 0;
				f3.seekg(0,ios::beg);
				while(f3){
					getline(f3,line);
					res[2][i] = line;
					i++;
					if(i==4)
						break;
				}
				i = 0;
				f4.seekg(0,ios::beg);
				while(f4){
					getline(f4,line);
					res[3][i] = line;
					i++;
					if(i==4)
						break;
				}*/
				f4.close();
				f3.close();
				f2.close();
				f1.close();
					
				cout<<"Enter the student number and faculty number to edit the marks (eg: s1,f1 -> 1 1)  : ";
				int p,q;
				int marks;
				cin>>p>>q;
				//while(cin>>p && cin>>q && p>0 && p<=4 && q>0 && q<=4 && p != -1){
				
				cout<<"Enter new marks for s"<<p<<" & f"<<q<<" : ";
				cin>>marks;
				res[q-1][p-1] = marks;			

				//}

				f1.open("/home/f1/f1.txt",ios::trunc|ios::out|ios::in);
				j = 0;
				sum=0;
				f1<<"\ts1\ts2\ts3\ts4\ttotal\nf1\t";
				while(f1){
					f1<<res[0][j]<<"\t";
					//sum += (res[j][0]);
					j++;
					if(j == 4){
						//f1<<sum<<endl;
						//sum = 0;
						break;
					}
				}
				
				f2.open("/home/f2/f2.txt",ios::trunc|ios::out|ios::in);
				j = 0;
				f2<<"\ts1\ts2\ts3\ts4\ttotal\nf2\t";
				while(f2){
					f2<<res[1][j]<<"\t";
					//sum += (res[j][0]);
					j++;
					if(j == 4){
						//f2<<sum<<endl;
						//sum = 0;
						break;
					}
				}
				f3.open("/home/f3/f3.txt",ios::trunc|ios::out|ios::in);
				j = 0;
				f3<<"\ts1\ts2\ts3\ts4\ttotal\nf3\t";
			 		
				while(f3){
					f3<<res[2][j]<<"\t";
					//sum += (res[j][0]);
					j++;
					if(j == 4){
						//f3<<sum<<endl;
						//sum = 0;
						break;
					}
				}
				f4.open("/home/f4/f4.txt",ios::trunc|ios::out|ios::in);
				j = 0;
				f4<<"\ts1\ts2\ts3\ts4\ttotal\nf4\t";
				while(f4){
					f4<<res[3][j]<<"\t";
					//sum += (res[j][0]);
					j++;
					if(j == 4){
						//f4<<sum<<endl;
						//sum = 0;
						break;
					}
				}
				f1.close();
				f2.close();
				f3.close();
				f4.close();
				f1.open("/home/s1/s1.txt",ios::trunc|ios::out|ios::in);
				j = 0;
				sum=0;
				f1<<"\tc1\tc2\tc3\tc4\ttotal\ns1\t";
				while(f1){
					f1<<res[j][0]<<"\t";
					sum += (res[j][0]);
					j++;
					if(j == 4){
						f1<<sum<<endl;
						sum = 0;
						break;
					}
				}
				
				f2.open("/home/s2/s2.txt",ios::trunc|ios::out|ios::in);
				j = 0;
				f2<<"\tc1\tc2\tc3\tc4\ttotal\ns2\t";
				while(f2){
					f2<<res[j][1]<<"\t";
					sum += (res[j][1]);
					j++;
					if(j == 4){
						f2<<sum<<endl;
						sum = 0;
						break;
					}
				}
				f3.open("/home/s3/s3.txt",ios::trunc|ios::out|ios::in);
				j = 0;
				f3<<"\tc1\tc2\tc3\tc4\ttotal\ns3\t";
			 		
				while(f3){
					f3<<res[j][2]<<"\t";
					sum += (res[j][2]);
					j++;
					if(j == 4){
						f3<<sum<<endl;
						sum = 0;
						break;
					}
				}
				f4.open("/home/s4/s4.txt",ios::trunc|ios::out|ios::in);
				j = 0;
				f4<<"\tc1\tc2\tc3\tc4\ttotal\ns4\t";
				while(f4){
					f4<<res[j][3]<<"\t";
					sum += (res[j][3]);
					j++;
					if(j == 4){
						f4<<sum<<endl;
						sum = 0;
						break;
					}
				}
				f1.close();
				f2.close();
				f3.close();
				f4.close();
			/*	f1.open("/home/f1/f1.txt",ios::trunc|ios::out|ios::in);
				j = 0;
				
				while(f1){
					f1<<res[j][0]<<endl;
					j++;
					if(j == 4)
						break;
				}
				
				f2.open("/home/f2/f2.txt",ios::trunc|ios::out|ios::in);
				j = 0;
				while(f2){
					f2<<res[j][1]<<endl;
					j++;
					if(j == 4)
						break;
				}
				f3.open("/home/f3/f3.txt",ios::trunc|ios::out|ios::in);
				j = 0;
				while(f3){
					f3<<res[j][1]<<endl;
					j++;
					if(j == 4)
						break;
				}

				f4.open("/home/f4/f4.txt",ios::trunc|ios::out|ios::in);
				j = 0;
				while(f4){
					f4<<res[j][1]<<endl;
					j++;
					if(j == 4)
						break;
				}
				f1.close();
				f2.close();
				f3.close();
				f4.close();
				f1.open("/home/s1/s1.txt",ios::trunc|ios::out|ios::in);
				j = 0;
				while(f1){
					f1<<res[j][0]<<endl;
					j++;
					if(j == 4)
						break;
				}
				
				f2.open("/home/s2/s2.txt",ios::trunc|ios::out|ios::in);
				j = 0;
				while(f2){
					f2<<res[j][1]<<endl;
					j++;
					if(j == 4)
						break;
				}
				f3.open("/home/s3/s3.txt",ios::trunc|ios::out|ios::in);
				j = 0;
				while(f3){
					f3<<res[j][1]<<endl;
					j++;
					if(j == 4)
						break;
				}
				f4.open("/home/s4/s4.txt",ios::trunc|ios::out|ios::in);
				j = 0;
				while(f4){
					f4<<res[j][1]<<endl;
					j++;
					if(j == 4)
						break;
				}
				f1.close();
				f2.close();
				f3.close();
				f4.close();*/


				
				
				break;
				
			}		
			case 4:
				f2.close();
				f1.close();
				f3.close();
				f4.close();
				fm.close();
				exit(0);
				break;
			default:
				printf("Enter the input correctly\n");
				f2.close();
				f1.close();
				f3.close();
				f4.close();
		}
	}
	return 0;

}
