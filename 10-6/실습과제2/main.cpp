#include <iostream>  //표준 입출력을 제공하는 헤더파일 포함 
using namespace std;	//네임스페이스 이름공간에 std 생략 
#include <vector>        // vector를 사용하기 위한 헤더파일 포함
int main() {			//메인함수 
	vector<vector<int>> score;	//2차원 벡터 선언
	int max;			//최대값을 저장할 변수
	int count = 0;      //카운터 변수 
	int sum;			//성적 합계를 저장할 변수 
	double avg;			//성적의 평균을 저장할 변수 
	for (int i = 0; i < 3; i++)	//3회 반복 
	{
		cout << i + 1 << "번째 학생의 국어,영어,수학 성적을 입력: ";	//메시지 출력 
		vector<int> temp;        // 한 학생의 성적을 저장할 벡터
		for (int j = 0; j < 3; j++){	//3회 반복 
			int num;					//점수를 입력받을 변수 선언 
			cin >> num;				//입력받은 값 저장 
			temp.push_back(num);		//벡터에 값 삽입 
		}
		score.push_back(temp);			//score 벡터에 값 삽입
	}
	for (int i = 0; i < score.size(); i++) {		//3회 반복 
		sum = 0;						//0으로 초기화
		avg = 0;						//0으로 초기화
		for (int j = 0; j < score.at(i).size(); j++)		//3회 반복 
			sum += score.at(i).at(j);			//국영수 성적 더하기 
		avg = sum /3.0;					//성적 평균 
		if (i == 0) {					//max 초기값 설정 
			max = avg;					//1번째 학생의 평균으로 초기화
			count = 1;					//첫번째
		}
		else if(max < avg) {			//최대값 비교 
			max = avg;					//avg값이 더크면 초기화
			count += 1;					//카운트
		}
	}
	cout << "최우수 학생은 " << count << "번째 학생이고 평균점수는 " << max << "점이다." << endl;	//메시지 출력 
	return 0;		//0을 반환하고 함수 종료
}
