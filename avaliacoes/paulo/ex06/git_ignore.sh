#!/bin/sh

# Script that lists hidden files by the repository.

cd ..
git ls-files --others --ignored --exclude-standard

# First we go to the parent directory (git main page) to call the function git in the repo's main page.
# Then we call the git function and it's file listing sub-function "ls-files" with the parameters --others (to show other files), --ignored (to ONLY show the ignored files {this suffix does not work without --others}) and --exclude-standard (to bring standard git exlusions {need to study this one more}).
