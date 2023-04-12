def simplifyPath(path: str) -> str: 
    path_l=path.split('/',maxsplit=-1)
    correct_path=[]
    for i in range(len(path_l)):
        if (path_l[i]!='' and path_l[i]!=".." and path_l[i]!='.'):
            correct_path.append(path_l[i]+'/')
        elif (path_l[i]==".." and len(correct_path)>0):
                correct_path.pop(len(correct_path)-1)

    correct_path_str=''.join(correct_path[:len(correct_path)])
    correct_path_str = '/'+correct_path_str[:len(correct_path_str)-1]
    return correct_path_str

def main():
    path = "/../"    
    print(simplifyPath(path))

if __name__ == "__main__":
    main()
