import json

def salvar_usuarios(caminho, lista_usuarios):
    dados = [u.to_dict() for u in lista_usuarios]  # Converte objetos → dict
    with open(caminho, "w", encoding="utf-8") as f:
        json.dump(dados, f, indent=4, ensure_ascii=False)

class Pessoa:
    def __init__(self,nome, email):
        self.nome=nome
        self.davy=0
        self.email=email

    def addDavy(self):
        self.davy +=1

    def comer(self):
        return f"{self.nome} está comendo coco."

    def to_dict(self):
        return{
            'nome': self.nome,
            'email': self.email,
            'davy': self.davy
        }
    @classmethod
    def from_dict(cls,data):
        return cls(
            nome=data['nome'],
            email=data['email'],
            davy=data['davy']
        )

# class topico:
#     num_topicos=0
#
#     def __init__(self,nome, carga):
#         self.nome=nome
#         self.carga=carga
#         topico.num_topicos +=1
#
#
#     def __repr__(self):
#         return f"'nome': {self.nome}, 'carga': {self.carga}"
#
#     def to_dict(self):
#         return{
#             "nome": self.nome,
#             "carga": self.carga
#         }
#
#     @classmethod
#     def from_dict(cls, data):
#         return cls(
#             nome=data["nome"],
#             carga=data["carga"]
#         )
#
#

#
# print()
# Matematica = topico("Matematica",90)
# Java = topico("Java", 60)
#
Usuario1 = Pessoa("Cesar" , "cesar.aps2006@gmail.com")
Usuario1.addDavy()
Usuario1.addDavy()
# Usuario1.adicionarTopico(Matematica)
# Usuario1.adicionarTopico(Java)
#
# Usuario2 = Pessoa("Rafael Boaventura",1234, "rafel.lindo@gmail.com")
# Usuario2.adicionarTopico(Java)
#
# print("USUARIO1")
print(Usuario1.to_dict())
# print("USUARIO2")

#


with open('teste.json', 'w', encoding = 'utf-8') as f:
    json.dump(Usuario1.to_dict(),f,indent=4)

with open('teste.json','r',encoding = 'utf-8') as f:
    dados=json.load(f)

print(dados)
#print("USUARIO3")
# Usuario3=Pessoa.from_dict(dados)
# print(Usuario3.to_dict())
# print(Usuario3.topicos)

# usuarios = [Pessoa.from_dict(u) for u in dados]
# for u in usuarios:
#     print(u.to_dict, u.id)