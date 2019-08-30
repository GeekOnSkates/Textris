# Textris

## Overview

As its cheesy name suggests, this is a text-based version
of the classic video game Tetris.  In case you don't know,
Tetris is possibly the most iconic puzzle game of all time.
Many systems had ports of it back in the 80s and 90s, and

## Technical details

* Written in C
* Does not use an IDE.  Unfortunately, I still struggle
    to understand CMake / the GNU build system, and I
    didn't want to require anyone else to to fight with
    it.  I wrote a super-simple Bash script for compiling,
    and it gets the job done for now.
* Has one dependency, a Linux library called "ncurses".
    Ncurses makes it possible to do some really cool
    effects, like moving stuff around on the screen and
    adding color and formatting to text.  I think it
    comes with most Linux distros "out of the box".
* Currently only available on Linux, but I eventually do
    plan to port it to Windows.  Sorry Mac users, I don't
    don't have a Mac or have any idea how to code for one.

## Roadmap

I know I could add these as issues, but IMO that's overkill
for such a simple game that's still in development.  Once I
have the game working, if you find a bug or would like me to
add a new feature, we'll use issues for that.  But as of right now, my to-do list is:

1. Get the pieces to fall and add collision checking
2. Get the game to check for lines and update the score
3. Get the game to check for the "game over" scenario, and
    create & show a high score list
4. Add music and sounds; this will probably add another
    OS-specific dependency, but that's okay.  IMO it would
    be worth it, cuz what's Tetris without that music?!
5. Add a menu screen where players can view instructions,
    view / clear the high scores, turn the music on/off,
    or exit the game without having to press CTRL-Z.
6. Add controller support!  Just cuz it runs in text mode
    doesn't mean it can't use controllers.   I know how to
    do this in both Windows and Linux, again with apologies
    to the Mac folks out there.
7. Port it to Windows and the Raspberry Pi (the Pi is still
    technically Linux, but it runs on a different processor
    so would need to be recompiled).
