
# To Collaborate and contribute:

1. Fork the repository to your own GitHub account.

2. Clone the repository to your local machine
```
$ git clone "https://www.github.com/<YourGitHubUsername>/FirstYear.git"
```
3. Create a branch where you can do your local work.

```
$ git branch <branchname>
$ git checkout <branchname>
```

4. Do your work and stage your changes.
```
$ git add <filename>
```

5. Commit you changes with a commit message containing your name, file(s) worked upon and the changes added.
```
$ git commit -m "Name| files| Changes"
```

6. Push changes to your forked repository
```
$ git push -u origin branchname
```
7. Create a pull request to the upstream repository.

# Synchronize forked repository with this repository

1. Create a remote upstream for this repository
```
$ git remote add upstream "https://github.com/Aman9026/FirstYear"
```

2. Fetch upstream changes in local machine
```
$ git fetch upstream
```

3. Switch to master branch
```
$ git checkout master
```

4. Merge changes in local machine
```
$ git merge upstream/master
```

5. Push changes to your forked GitHub repository
```
$ git push -f origin master
