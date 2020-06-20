SELECT P.Pnumber
FROM k_works_on W JOIN k_project P ON P.Pnumber = W.Pno  
JOIN k_employee E ON  W.Essn = E.ssn
WHERE E.Lname = 'Wong'
UNION 
SELECT P.Pnumber
FROM k_department D JOIN k_employee E ON D.Mgr_ssn = E.ssn
JOIN k_project P ON D.Dnumber = P.Dnum
WHERE E.Lname = 'Wong'
ORDER BY Pnumber