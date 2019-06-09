# SKSE Example Plugin
---
This includes the example plugin from https://github.com/xanderdunn/skaar.

I have added a custom function to the example plugin which adds all perks to the player character. The .esp adds a button to Riverwood’s coc location which calls the custom c++ function through papyrus when activated, these files are includes within the data directory.

I have edited the SKSE project as to not compile as it was causing me major issues and included complied ‘.libs’. This is the reason for no ‘.gitignore’ as the compiled files are required. The repo is a little big as a result.

I used VS 2017 in this project along with the classic version of the Creation Kit.
