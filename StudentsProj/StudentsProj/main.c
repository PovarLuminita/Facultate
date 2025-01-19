#include <stdio.h>
#include <stdlib.h>
#include "grade.h"
#include "student.h"

int main()
{

   /* grade g[3] = {};
    FillGrades(g,3);
    printGrades(g,3); */

    /*student stds = {1, "2000", 'a',.grades[0] = {"math1", 100},.grades[1] = {"math2", 200},.grades[2] = {"math1", 90}};

    fillStudent(&stds);
    setAverage(&stds);
    printStudent(stds);*/

    student stds[5] = {
    {1, "2000", 'a',.grades[0] = {"math1", 100},.grades[1] = {"math2", 200},.grades[2] = {"math1", 90}},
    {2, "2000", 'b',.grades[0] = {"math1", 101},.grades[1] = {"math2", 100},.grades[2] = {"math1", 150}},
    {3, "2000", 'a',.grades[0] = {"math1", 150},.grades[1] = {"math2", 200},.grades[2] = {"math1", 300}},
    {4, "2000", 'b',.grades[0] = {"math1", 140},.grades[1] = {"math2", 212},.grades[2] = {"math1", 270}},
    {5, "2000", 'a',.grades[0] = {"math1", 100},.grades[1] = {"math2", 180},.grades[2] = {"math1", 400}}
};

  /* fillStudents(stds, 2);
     printStudents(stds, 2);
     printf(" %d \n", spNumber(stds, 5, 'a'));
     printf(" %lf\n",  bestGrade(stds[3]) );
     bestStudent(stds, 5, 'a');
   */
    return 0;
}
