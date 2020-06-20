SELECT D.Dname, E.Fname, E.Minit, E.Lname, P.Pname
FROM  k_employee E JOIN k_department D ON E.Dno = D.Dnumber
JOIN k_works_on W ON W.Essn = E.ssn
JOIN k_project P ON W.Pno = P.Pnumber
ORDER by D.Dname DESC, E.Fname, E.Minit, E.Lname, P.Pname