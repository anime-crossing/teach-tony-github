#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << "This program is used to teach tony Branching\n";

    // First, we will discuss how to add your editted code and see
    // those changes

    // Tony, type your name here in this line below:

    string myName = "Tonyyy";

    cout << "My name is " << myName << endl;

    // Next, type "git status" in the terminal, what do you see?
    // You should see it say: "modified: main.cpp"
    // Next, add, commit, and push your code to github

    // Explaining "git add"
        // Git can either add everything that has been changed...or one specific file
        // "." is a term in CS that typically means "everything"
            // "git add ." will add every single file to your "submission", but github is smart
            // enough to only add the things that are changed
        // If you want to add a specific file, you would do:
            // "git add file-name.file_extension"
            // To add "main.cpp", you would type "git add main.cpp"
            // Chai will explain tabbing and autocomplete


    //Explaining "git commit"
        // Once you added everything you need to add, you essentially need to tell github
        // Okay, I've confirmed the contents, it's ready to be put on the web
        // type in "git commit -m "your message here""
            // "git commit" is the commit command
            // "-m" means that you have a message attached to your commit
            // "your message here" is the message you wish to attach to your commit
                // Usually. this message is sort of a progress indicator
                // Chai will show examples
        // So, a decent commit command may be:
            // git commit -m "Added my name"
        
    //Explaining "git push"
        // One of the most self-explanatory commands, "push" your changes to the live servers
        // Once you push something, the code you just pushed will be on github
    
    // Have Chai pull your code, and make the changes below:

    // Explaining "git rm"
        // You still have to tell github to delete a file
        // that's what "git rm" is for telling github that you deleted something
        // same logic as git add, you just what file you want to remove
        
        // Three total methods
            // you can delete the file first, then run `git rm file-name` to update github
            // you can run `git rm file-name` to remove it, and inform github in command
            // you can delete the file, and do `git add .` at the end which tells everything
    //Chai, type your favorite anime here in this line below:

    string chaiAnime = "";

    cout << "Chai's favorite anime is " << chaiAnime << endl;

    // Chai will add, and push his code, and then you will pull his revisions
    
    // Explaning "git pull"
        // Much like "git push", that pushes your updated code to the internet, git pull checks
        // to see if it was updated, and update your code to the most recent version if there is
        // You will notice that your code will now have chai's favorite anime in line 53
        

    return 0;
}