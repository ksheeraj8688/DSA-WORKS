# DSA-WORKS

CSE-B · Data Structures and Algorithms · 2026

A collection of C programming assignments, output screenshots, class task notes, and a DSA certificate.

## Repository guide

| Folder | Contents |
| --- | --- |
| [Assignments](Assignments) | Eight C programs, numbered by unit and question |
| [Assignment outputs](Assignments/Output) | Output images matching each program's number |
| [Tasks to do](TasksToDo) | Eleven notebook pages grouped by date and topic |
| [DSA certificate](DSA-Certificate/dsa_certificate.pdf) | Certificate PDF |

## Assignments

| No. | Topic | Program | Result |
| --- | --- | --- | --- |
| 1.1 | Binary search | [Code](Assignments/1.1-Binarysearch.c) | [Output](Assignments/Output/1.1-output.png) |
| 1.2 | Insertion sort | [Code](Assignments/1.2-Insertionsort.c) | [Output](Assignments/Output/1.2-output.png) |
| 2.1 | Infix to postfix | [Code](Assignments/2.1-Postfix.c) | [Output](Assignments/Output/2.1-output.png) |
| 2.2 | Circular queue | [Code](Assignments/2.2-Circularqueue.c) | [Output](Assignments/Output/2.2-output.png) |
| 3.1 | Singly linked list | [Code](Assignments/3.1-Singlylinkedlist.c) | [Output](Assignments/Output/3.1-output.png) |
| 3.2 | Doubly linked list | [Code](Assignments/3.2-Doublylinkedlist.c) | [Output](Assignments/Output/3.2-output.png) |
| 4.1 | BST traversals | [Code](Assignments/4.1-BSTTraversal.c) | [Output](Assignments/Output/4.1-output.png) |
| 4.2 | BST deletion | [Code](Assignments/4.2-BSTDeletion.c) | [Output](Assignments/Output/4.2-output.png) |

## Class tasks

| Date | Topic | Pages |
| --- | --- | --- |
| 06 July 2026 | [Variables and data types](TasksToDo/2026-07-06-VariablesAndDataTypes) | 4 |
| 07 July 2026 | [Companies, GATE syllabus, inputs/outputs and everyday DSA](TasksToDo/2026-07-07-DSAApplications) | 3 |
| 09 July 2026 | [Structure size and self-referential structures](TasksToDo/2026-07-09-Structures) | 2 |
| 10 July 2026 | [Website functions and return values](TasksToDo/2026-07-10-Functions) | 1 |
| 21 July 2026 | [Java hash codes](TasksToDo/2026-07-21-HashCodes) | 1 |

## Run a C program

With GCC installed, run these commands from the repository folder:

```sh
gcc Assignments/4.1-BSTTraversal.c -o bst-traversal
./bst-traversal
```

On Windows, compile with `-o bst-traversal.exe` and run `.\bst-traversal.exe` in PowerShell.

## File naming

- Programs use `unit.question-Topic.c`; outputs use the same number.
- Task folders start with `YYYY-MM-DD` so they sort chronologically.
- Task images use `page-toDoOriginalDate-Topic.jpg`, keeping the original task date and adding a plain-language description.
