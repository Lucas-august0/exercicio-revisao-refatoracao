#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  protected:
    double salarioHora;  
    double quotaMensalVendas;  

  public:
    double pagamentoMes(double horasTrabalhadas); //jogar o metodo para o .cpp
    void setSalarioHora(double salario_por_hora);
    void setQuotaMensalVendas(double quota_mensal);
	
};
#endif
