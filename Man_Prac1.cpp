// This Program is created by Khunt_Dharmik_23CE058
//This Program is created for calculating  C.G.P.A of 3 subjects
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    string StudentId,StudentName;
    int Semester,TheoryMarks[3],PracticalMarks[3];
    string SubjectName[3],TLetterGrade[3],PLetterGrade[3];
    int i,TGradepoint[3],PGradepoint[3],GradeTotal=0;
    float SGPA;
    cout<<"Enter Id of the Student:";
    cin>>StudentId;
    fflush(stdin);
    cout<<"Enter The Name of the Student:";
    cin>>StudentName;
    cout<<"Enter The Semester of the Student:";
    cin>>Semester;
    for ( i = 0; i < 3; i++)
    {
        /* code */
        cout<<"Enter The Name of the Subject:"<<i+1<<":";
        fflush(stdin);
        getline(cin,SubjectName[i]);
        cout<<"Enter The Theory Marks of the Subject:"<<i+1<<":";
         fflush(stdin);
        cin>>TheoryMarks[i];
        cout<<"Enter The Practical Marks of the Subject:"<<i+1<<":";
         fflush(stdin);
        cin>>PracticalMarks[i];
    }
    for ( i = 0; i < 3; i++)
    {
        /* code */
        if(TheoryMarks[i]>=80)
        {
          TLetterGrade[i]="AA";
          TGradepoint[i]=10;
        }
        else if (TheoryMarks[i]>=73&&TheoryMarks[i]<80)
        {
          TLetterGrade[i]="AB";
          TGradepoint[i]=9;
        }
        else if (TheoryMarks[i]>=66&&TheoryMarks[i]<73)
        {
          TLetterGrade[i]="BB";
          TGradepoint[i]=8;
        }
        else if (TheoryMarks[i]>=60&&TheoryMarks[i]<66)
        {
          TLetterGrade[i]="BC";
          TGradepoint[i]=7;
        }
         else if (TheoryMarks[i]>=55&&TheoryMarks[i]<60)
        {
          TLetterGrade[i]="CC";
          TGradepoint[i]=6;
        }
         else if (TheoryMarks[i]>=50&&TheoryMarks[i]<55)
        {
          TLetterGrade[i]="CD";
          TGradepoint[i]=5;
        }
         else if (TheoryMarks[i]>=45&&TheoryMarks[i]<50)
        {
          TLetterGrade[i]="DD";
          TGradepoint[i]=4;
        }
        else
        {
            TLetterGrade[i]="FF";
            TGradepoint[i]=0;
        }
        GradeTotal+=4*TGradepoint[i];

    }
    for ( i = 0; i < 3; i++)
    {
        /* code */
        if(PracticalMarks[i]>=80)
        {
          PLetterGrade[i]="AA";
          PGradepoint[i]=10;
        }
        else if (PracticalMarks[i]>=73&&PracticalMarks[i]<80)
        {
          PLetterGrade[i]="AB";
          PGradepoint[i]=9;
        }
        else if (PracticalMarks[i]>=66&&PracticalMarks[i]<73)
        {
          PLetterGrade[i]="BB";
          PGradepoint[i]=8;
        }
        else if (PracticalMarks[i]>=60&&PracticalMarks[i]<66)
        {
          PLetterGrade[i]="BC";
          PGradepoint[i]=7;
        }
         else if (PracticalMarks[i]>=55&&PracticalMarks[i]<60)
        {
          PLetterGrade[i]="CC";
          PGradepoint[i]=6;
        }
         else if (PracticalMarks[i]>=50&&PracticalMarks[i]<55)
        {
          PLetterGrade[i]="CD";
          PGradepoint[i]=5;
        }
         else if (PracticalMarks[i]>=45&&PracticalMarks[i]<50)
        {
          PLetterGrade[i]="DD";
          PGradepoint[i]=4;
        }
        else
        {
          PLetterGrade[i]="FF";
          PGradepoint[i]=0;
        }
        GradeTotal+=4*PGradepoint[i];
    }
    SGPA=GradeTotal/24;
    cout<<endl<<endl;
    cout<<"Student Id"<<setw(12)<<":"<<setw(5)<<" "<<setw(-10)<<StudentId<<endl;
    cout<<"Student Name"<<setw(10)<<":"<<setw(5)<<" "<<setw(-10)<<StudentName<<endl;
    cout<<"Semester"<<setw(14)<<":"<<setw(5)<<" "<<setw(-10)<<Semester<<endl;
    cout<<endl<<endl;
    cout<<setw(35)<<" "<<setw(-10)<<"Theory"<<setw(7)<<" "<<"Practical"<<endl;
    cout<<SubjectName[0]<<setw(18)<<" "<<TLetterGrade[0]<<setw(13)<<PLetterGrade[0]<<endl;
    cout<<SubjectName[1]<<setw(16)<<" "<<TLetterGrade[1]<<setw(13)<<PLetterGrade[1]<<endl;
    cout<<SubjectName[2]<<setw(10)<<" "<<TLetterGrade[2]<<setw(13)<<PLetterGrade[2]<<endl;
    cout<<endl<<endl;
    cout<<"S.G.P.A"<<setw(14)<<":"<<setw(5)<<SGPA;

return 0;
}
  