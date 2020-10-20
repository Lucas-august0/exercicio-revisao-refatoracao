#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  private:
    std::string nome;  
	int projetos;

  public:
    void setNomeEngenheiro(std::string nome_eng) {
         nome = nome_eng;
    }
    
    void setProjetos(double p) {
        projetos = p;
    }

    std::string getNomeEngenheiro() {
        return (nome);
    }

    double getProjetos() {
        return (projetos);
    }

	
};
