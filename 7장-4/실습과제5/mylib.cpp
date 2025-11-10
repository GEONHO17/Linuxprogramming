#include "mylib.hpp"        //헤더파일 선언 

Book::Book(string title,int price,int pages){       //생성자 정의 
    this -> title = title; this -> price = price; this ->pages = pages; 
    //입력받은 값으로 초기화 
}                                           //생성자 끝 
void Book::show(){                          //출력 함수 
    cout <<title<<' '<<price<<"원 "<<pages<<" 페이지"<<endl;    //메시지 출력 
}                                           //함수 끝 
string Book::getTitle(){return title;}      //책 제목 반환하는 함수 
bool Book::operator==(int p){               //가격 비교 
    return this -> price == p;              //같으면 반환 
}                                           
bool Book::operator==(const string& title ){      //제목 비교           
    return this ->title ==title;            //같으면 반환 
}   
bool Book::operator==(Book& a){             //두 책이 같은지 비교 
    //같으면 반환 
    return this -> title  == a.title && this ->price == a.price && this -> pages == a.pages;
}
//friend 함수를 이용하여 외부함수로 구현 
// bool operator==(int p,Book& a){  //가격 비교 
//     return a.price == p;         //같으면 반환 
// }
// bool operator==(string& title, Book& a){     //제목 비교 
//     return a.price == title;                 //같으면 반환 
// }        
// bool operator==(Book& a,Book& b){            //두 책이 같은지 비교 
        // 같으면 반환 
//     return a.title == b.title && a.pages == b.pages && a.price == b.price 
// }
