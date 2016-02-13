# CS303_P1A
COMP-SCI 303 Project 1A

To make changes to the repository:

Once you've cloned the repository, you should be able to use Visual Studio to navigate to the repository directory on your computer and open the .sln file as a project. 
	- The sln file is located at "\Documents\GitHub\CS303_P1A\CS303_P1A"
That way, you can make changes to those files like you normally would and all the changes will be easy to push to the master repository.

When you go to work on the project, you have to do a pull to sync your repository directory with the master. Just open the shell and type:

git pull

And then you can see any changes I might have made and start editing the files.

Once you are done making changes, you open the shell and type all of these commands into the shell in the exact order listed: 

cd CS303_P1A
git status    [This is optional but will tell you what files have been changed but not pushed to the master repository. A file must be changed and saved for it to show up untracked.]
git add file_name    [Replace "file_name" with the name of the file, or you can do folder names too. This will queue the changes up to be committed.]
git commit -m"A message to describe your changes." [I will probably just put what technical requirements I worked on for the changes I committed so we can have an idea of our progress.]
git push [This is the last step to push the changes to the master repository. Your changes should be made on the master repository at this point.]

