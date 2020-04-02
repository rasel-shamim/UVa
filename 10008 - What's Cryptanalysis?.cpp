#include<iostream>
#include<cstring>
#include<bits/stdc++.h>

struct structure{
	char x;
	int cnt = 0;
}arr[26];

using namespace std;

int main()
{
	int t,counterarray[26],j,a,b,p,count=25,i;

	for(p=0;p<25;p++){
		arr[p].x = (char)(65+p);
	}

	cin>>t;

	for(i=1;i<=t+1;i++){

		string sentence;
		int len=0,i;
		getline(cin,sentence);

		while(sentence[len]!= '\0')
			len++;

		for(i=0;i<len;i++){
			if(sentence[i]=='A'||sentence[i]=='a')
				arr[0].cnt++;
			else if(sentence[i]=='B'||sentence[i]=='b')
				arr[1].cnt++;
			else if(sentence[i]=='C'||sentence[i]=='c')
				arr[2].cnt++;
			else if(sentence[i]=='D'||sentence[i]=='d')
				arr[3].cnt++;
			else if(sentence[i]=='E'||sentence[i]=='e')
				arr[4].cnt++;
			else if(sentence[i]=='F'||sentence[i]=='f')
				arr[5].cnt++;
			else if(sentence[i]=='G'||sentence[i]=='g')
				arr[6].cnt++;
			else if(sentence[i]=='H'||sentence[i]=='h')
				arr[7].cnt++;
			else if(sentence[i]=='I'||sentence[i]=='i')
				arr[8].cnt++;
			else if(sentence[i]=='J'||sentence[i]=='j')
				arr[9].cnt++;
			else if(sentence[i]=='K'||sentence[i]=='k')
				arr[10].cnt++;
			else if(sentence[i]=='L'||sentence[i]=='l')
				arr[11].cnt++;
			else if(sentence[i]=='M'||sentence[i]=='m')
				arr[12].cnt++;
			else if(sentence[i]=='N'||sentence[i]=='n')
				arr[13].cnt++;
			else if(sentence[i]=='O'||sentence[i]=='o')
				arr[14].cnt++;
			else if(sentence[i]=='P'||sentence[i]=='p')
				arr[15].cnt++;
			else if(sentence[i]=='Q'||sentence[i]=='q')
				arr[16].cnt++;
			else if(sentence[i]=='R'||sentence[i]=='r')
				arr[17].cnt++;
			else if(sentence[i]=='S'||sentence[i]=='s')
				arr[18].cnt++;
			else if(sentence[i]=='T'||sentence[i]=='t')
				arr[19].cnt++;
			else if(sentence[i]=='U'||sentence[i]=='u')
				arr[20].cnt++;
			else if(sentence[i]=='V'||sentence[i]=='v')
				arr[21].cnt++;
			else if(sentence[i]=='W'||sentence[i]=='w')
				arr[22].cnt++;
			else if(sentence[i]=='X'||sentence[i]=='x')
				arr[23].cnt++;
			else if(sentence[i]=='Y'||sentence[i]=='y')
				arr[24].cnt++;
			else if(sentence[i]=='Z'||sentence[i]=='z')
				arr[25].cnt++;
		}
	}
	for(j=0;j<26;j++){
		counterarray[j] = arr[j].cnt;
	}

	sort(counterarray,counterarray+26);

	int anotherarray[26];

	anotherarray[count] = counterarray[25];

	count = 24;
	
	for(i=24;i>=0;i--){
		if(counterarray[i]==counterarray[i+1])
			continue;
		else{
			anotherarray[count] = counterarray[i];
			count--;
		}
	}

	for(a=25;a>=0;a--){
		if(anotherarray[a]==0)
			break;
		for(b=0;b<26;b++){
			if(anotherarray[a]==arr[b].cnt)
				cout<<arr[b].x<<" "<<arr[b].cnt<<endl;
		}
	}

	return 0;
}
