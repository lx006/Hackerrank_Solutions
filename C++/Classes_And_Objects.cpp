
class Student
{
    private:
        int score[5];
        int sum;
    public:
        Student()
        {
            sum=0;
        }
        void input()
        {
            for(int i=0;i<5;i++)
            {
                cin>>score[i];
            }
        }
        int calculateTotalScore()
        {
            for(int i=0;i<5;i++)
            {
                sum=sum+score[i];
            }
            return sum;
        }

};

