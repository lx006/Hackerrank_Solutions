Select Students.Name
From ( Students join Friends Using(ID)
       join Packages P1 on Students.ID=P1.ID
       join Packages P2 on Friends.Friend_ID=P2.ID)
Where P2.Salary > P1.Salary
Order By P2.Salary;
