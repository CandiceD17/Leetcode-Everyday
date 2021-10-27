import os

rootDir = '.'
cwd = os.getcwd()
for dirName, subdirList, fileList in os.walk(rootDir):
    dirName = dirName.split('/')[-1]
    if dirName == "200-299" or dirName == "100-199" or dirName == "0-99":
        print('Found directory: %s' % dirName)
        for fname in fileList:
            if fname[-3:] == ".py" or fname[-3:] == ".md":
                continue
            if fname[-4:] == ".cpp":
                continue
            os.rename(os.path.join(cwd, dirName, fname), os.path.join(cwd, dirName, fname) + '.cpp')
