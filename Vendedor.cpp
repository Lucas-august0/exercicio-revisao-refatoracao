#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  private:
    std::string nome;  	  

  public:
	double quotaTotalAnual() {
	  return quotaMensalVendas * 12;
	}
	
    void setNomeVendedor(std::string nome_vend) {
        nome = nome_vend;
    }

    std::string getNomeVendedor() {
        return (nome);
    }
};
