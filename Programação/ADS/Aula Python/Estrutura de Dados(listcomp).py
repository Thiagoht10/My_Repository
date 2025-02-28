linguagens = ["Python", "Java", "JavaScript", "C", "C#", "C++", "Swift", "Go", "Kotlin"]
#linguagens = '''Python Java JavaScript C C# C++ Swift Go Kotlin'''.split() # Essa sintaxe produz o mesmo resultado que a linha 1

print("Antes da listcomp = ", linguagens)

linguagens = [item.lower() for item in linguagens]

print("\nDepois da listcomp = ", linguagens)


linguagens = '''Python Java JavaScript C C# C++ Swift Go Kotlin'''.split()

linguagens_java = [item for item in linguagens if "Java" in item]

print(linguagens_java)