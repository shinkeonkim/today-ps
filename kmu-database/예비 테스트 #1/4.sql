SELECT P.Pnumber, D.Dnumber, E.Fname, E.Minit, E.Lname
FROM k_project P JOIN k_department D ON P.Dnum = D.Dnumber
JOIN k_employee E ON D.Mgr_ssn = E.ssn
WHERE P.Plocation = "Stafford"