репозиторий, содержащий в себе все файлы, касающиеся курсовой работы.
что касаемо самого сервера:
можно, конечно, написать ./server -h, но я и тут об этом скажу. сервер запускается со следующими параметрами:
-h вывод справки
-pdb файл, содержащий в себе логины и пароли пользователей (рекомендую: db.txt)
-pl отстук логов (рекомендую log.txt)
-p порт. можно не указывать, по дефолту проставлен 33333
-a адрес сервера. можно не указывать, по дефолту проставлен 127.0.0.1
что касаемо тестов:
все тесты выполняются как обычно, кроме последнего, для него нужно запустить клиента. если вдруг будет 1 фейл, то это не страшно, если присмотреться, под каждым тестом написано passed. была конечно проблема с тем, что сокет не мог забиндиться, но исправлена
и да, все сразу с документацией потому что имел возможность выполнить лабораторную работу номер 4, кстати говоря, прямо на ваших глазах, Михаил Юрьевич.
