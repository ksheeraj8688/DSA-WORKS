# Undo/Redo Text Editor
### A study in stacks

A DSA mini project that makes editing history visible. Write, undo, redo, and follow how saved versions move between two stacks.

[Open live prototype](https://undo-redo-text-editor-final.vercel.app/) · [Source code](https://github.com/ksheeraj8688/undo-redo-text-editor) · [Project report](Project-Report.docx) · [Presentation](Presentation.pptx)

## The idea

Undo reverses the most recent change first—the same Last-In, First-Out rule used by a stack. This project connects that familiar action to its underlying data structure through a standalone C program and an interactive browser visualiser.

The current text sits between two stacks: one keeps earlier versions, and the other keeps versions that have been undone.

| Action | What happens |
| --- | --- |
| Edit | Save the current text on the Undo stack, apply the edit, and clear the Redo stack. |
| Undo | Save the current text on the Redo stack, then restore the top Undo entry. |
| Redo | Save the current text on the Undo stack, then restore the top Redo entry. |
| Reset | Clear the text and both stacks; restore the default history limit. |

A new edit after Undo starts a different editing path. The old path is no longer redoable, while the web visualiser retains it in the turn-history view.

## What the project includes

- **Visible stack operations:** animated snapshots, stack counters, and a push/pop log.
- **Configurable history:** default capacity of 8, adjustable from 3 to 50.
- **Turn history:** a visual record of edits and alternative branches with read-only snapshots.
- **Teaching controls:** slow animations, keyboard shortcuts, and live word and character counts.
- **Learning panel:** explanations of the approach alongside the C source.
- **C console implementation:** a separate, menu-based program demonstrating the same two-stack algorithm.

The browser version uses HTML, CSS, and JavaScript. It runs its own JavaScript implementation; the C program runs separately.

## Project materials

| Material | Repository copy | Original shared file |
| --- | --- | --- |
| Project report | [Project-Report.docx](Project-Report.docx) | [Google Drive](https://docs.google.com/document/d/1HLXDKt_koUY-OAYpaYUuwj83_KXDOC5p/edit) |
| Presentation | [Presentation.pptx](Presentation.pptx) | [Google Drive](https://docs.google.com/presentation/d/1P0Z0EGCfFirIN9ARtPZAsYtIQ4UwrCnD/edit) |
| Prototype | [Live demo](https://undo-redo-text-editor-final.vercel.app/) | [Prototype link document](https://docs.google.com/document/d/1nkxfas-KcUqMboZue8JnbXkafnn9FvJ3tIm5yDcRdtM/edit) |

The report covers the theory, algorithms, implementation, complexity, test cases, limitations, and core source listing. The presentation provides a walkthrough for the project demonstration.

## Try the demonstration

1. Enter some text, then change it twice.
2. Press **Undo** and watch the current version move to the Redo stack.
3. Press **Redo** to restore it.
4. Undo again, then enter different text to see the Redo path clear.
5. Explore the history view and adjust the capacity to inspect bounded history.

For a local copy, download the [source repository](https://github.com/ksheeraj8688/undo-redo-text-editor) and open `index.html`. Run its C console version with:

```sh
gcc -std=c11 undo_redo.c -o undo_redo
./undo_redo
```

## DSA concepts and practical limits

The project demonstrates stacks, LIFO order, snapshots, underflow checks, bounded history, and a first-child/next-sibling representation of turn history.

Stack index changes take constant time, but copying a snapshot takes O(n) for n text bytes. In the C version, discarding the oldest entry shifts saved snapshots and can take O(L × n), where L is the history capacity. This distinction matters when discussing the implementation's actual complexity.

The C program accepts one line of up to 1023 bytes per entry. Full snapshots use more memory than storing only changes. The web prototype keeps temporary session history; it is intended for learning and demonstration.

## Team and academic context

**Anil Neerukonda Institute of Technology and Sciences (ANITS)**  
Department of Computer Science and Engineering  
II/IV B.Tech · Academic year 2026–2027

| Roll number | Team member |
| --- | --- |
| A25126510086 | K. Surya |
| A25126510102 | P. Leela Seshu |
| A25126510105 | Teja Ponnada |
| A25126510113 | R.M. Ksheeraj |
| A25126510120 | D. Sumanth |

**Faculty guide:** Dr. B. Meena

Developed with AI assistance as a team DSA mini project.

[Back to DSA coursework](../README.md)
