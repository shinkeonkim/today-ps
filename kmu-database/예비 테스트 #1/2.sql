SELECT E.Ssn, E.Fname, E.Minit, E.Lname, E.Bdate, E.Address, E.Sex, E.Salary, E.Super_ssn, E.Dno
FROM k_employee E join k_department  D on E.Dno = D.Dnumber
where D.Dnumber = 5