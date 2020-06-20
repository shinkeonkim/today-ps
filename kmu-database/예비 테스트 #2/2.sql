SELECT E.Fname, E.Minit, E.Lname, W.hours
FROM k_employee E JOIN k_department D ON E.Dno = D.Dnumber
JOIN k_works_on W ON W.Essn = E.Ssn
JOIN k_project P ON W.Pno = P.Pnumber
WHERE D.Dnumber = 5 AND P.Pname = "ProductX" AND W.hours >= 10