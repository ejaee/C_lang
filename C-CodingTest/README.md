# π Coding Test
* κ° μ½λ© νμ€νΈ μ¬μ΄νΈ λ¬Έμ νμ΄λ₯Ό μ λ¦¬νλ€<br>
* cμΈμ΄ λ¬Έμ νμ΄λ‘ cμΈμ΄μ μ΅μν΄μ§λ€

### [λ°±μ€](https://www.acmicpc.net "BOJ")

* μ¬μ©μΈμ΄ : C
* μ§νλ°©μ : [λ¨κ³λ³λ‘ νμ΄λ³΄κΈ°](https://www.acmicpc.net/step "BOJ_step")
* μ€ν°λ : [solved.ac](https://solved.ac/ranking/rival)

---

## π Git νμ©νκΈ°
[λ¦¬λμ€λͺλ Ήμ΄ μ°Έκ³ μλ£](https://github.com/wooseok1152/hadoop-spark/blob/master/Linux%20κΈ°λ³Έ%20λͺλ Ήμ΄%20&%20Hadoop,%20R%20λ°%20R-studio%20μ€μΉ%20λΆλ‘.pdf "Linux_Command")

1. μκ²© μ μ₯μ μμ±
  * [κΉνλΈ μ¬μ΄νΈμμ μμ±](https://github.com/new)

2. λ‘μ»¬ μ μ₯μ μμ±<br>
* μκ²© μ μ₯μμ μ§μ΄λλ λ‘μ»¬ μ μ₯μ μμ±
* ***$ mkdir dir_name***
  
3. Git μ μ₯μ μμ± <br>
* ***$ git status*** μΌλ‘ μν νμΈν΄λ³΄λ©΄ μ΄κ³³μ μ μ₯μκ° μλλΌλ μλ¬κ° λ¨λλ° gitμ΄ μ€μ  μλμκΈ° λλ¬Έ
* ***$ git init*** μΌλ‘ Git μ μ₯μ μμ±
* **.git**μ΄λΌλ νμ λλ ν λ¦¬κ° μμ±λκ³  μ΄ν ***$ git status*** μΌλ‘ git μ€μ  νμΈ
  
4. μκ²© μ μ₯μμ μ¬λ¦¬κ³  μΆμ νμΌλ€μ μ ν
* ***$ git add file_name*** 
* λλ ν΄λΉ νμΌμμΉλ .(dot)μ΄λ―λ‘ ***$ git add .***λ₯Ό ν΅ν΄ λͺ¨λ  νμΌ μ νμ΄ κ°λ₯

5. commitνκΈ°<br>
* ***$ git commit -m "μμ λ΄μ©"***

6. λ‘μ»¬ μ μ₯μμ μκ²© μ μ₯μ remote
* μκ²© μ μ₯μ μμ± μ λ§λ€μ΄μ§λ URLμ΄ νμ
* ***$ git remote add origin https://github.com/Ejaeda/-.git***

6. μ νν νμΌλ€ μκ²© μ μ₯μλ‘ μ΄λ μν€κΈ° push
* ***$ git push -u origin master***μΌλ‘ μ°λλ μκ²© μ μ₯μμκ² Push
  * -u μ΅μ : νλ²νλ©΄ μ΄νλΆν° git pushλ§ μλ ₯ κ°λ₯
   
7. μΆκ°μ μΌλ‘ μμ μ¬ν­ λ°μ μ
    * ***$ git add .***
    * ***$ git commit -m "init commit"***
    * ***$git push (-u origin master)***
  

------

## π git push μ€λ₯ λͺ¨μ<br>

π μ΅μ΄ pust μμ μ€λ₯ λ°μ

```vim
  error: src refspec master does not match any.
  error: failed to push some refs to 'https://github.com/id/repos. name.git'
```
>  μλ¬΄ νμΌμ΄λ μμ±ν΄ commitν ν pust νλ©΄ ν΄κ²°

-----

π λ¬Έμ 
```.vim
git add . -> commit -> untrack file μ κ²½μ°
```
`git add .`λ λͺλ Ήμ΄λ₯Ό μ€νν λλ  μ΄νμμ λ°μν λ³κ²½ λ΄μ©λ§ ν¬ν¨νλ€

π ν΄κ²°
```vim

 git add -A
 
```
 -  -A μ΅μμ μμ λλ ν λ¦¬ μμ μ΄λμ μμΉνλ  λͺ¨λ  λ³κ²½ λ΄μ©μ μ€νμ΄μ§μΌλ‘ λκΈ΄λ€
 -  μ΅μμ λλ μμ `git add .` νλκ²κ³Ό κ°λ€

-----
π λ¬Έμ 
```.vim
Pulling is not possible because you have unmerged files.
Committing is not possible because you have unmerged files.
```
git pull νλκΉ λ°μν μλ¬
- μΆ©λλ‘ μΈν΄ merge νμμλ μλ¬ λ°μ

μκ³ λ³΄λ λ‘μ»¬κ³Ό μκ²© λλ€ κ°μ νμΌμ΄ μλλ° λ‘μ»¬μμ μμ§ mergeκ° μ μλλ€κ³  μΈμ
π ν΄κ²°
```.vim
 git commit -am 'μ»€λ°λ©μμ§'
```
νλ μ λμκ°

[λμ](https://velog.io/@2ujin/%EA%B9%83-Pull-is-not-possible-because-you-have-unmerged-files-%EC%97%90%EB%9F%AC)<br>

-----

π λ¬Έμ 
```.vim
git push μΆ©λ λ°μμ
```

π ν΄κ²°
```.vim
git push -> git pull
```

-----
### κΈ°ν
  
-u μ΅μ
> μ΅μ΄ 1ν μλ ₯ μ΄ν git pushλ§μΌλ‘ push κ°λ₯
```.vim
  git push -u origin branch_name 
```

remote μ°κ²° μνλ₯Ό νμΈ
  ```.vim
  git remote -v
  ```
μ°κ²° λλ λ°©λ²

  ```.vim
  git remote remove <name>
  ```

clone
> μλ²μ νλ‘μ νΈλ₯Ό λ΄λ €λ°λ λͺλ Ήμ΄
  ```.vim
  git clone μκ²© μ μ₯μ μ£Όμ
  ```
