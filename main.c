#include "putsphere.h"
#include "putvoxel.h"
#include "interpretador.h"
int main (){ 
Sculptor*S1; 
Scultor s(200,200,200);
  interpretador parser;
  std:: vector<FIGURAGEOMETRICA*> figs;
  figs= parser.parse(file_name);
      s1= new sculptor(parser.getDinx(), parser.getDiny(), parser.getdinz() );
      for(size_t i=0; i<figs.size();i++){
        std:: cout << "draw/n";
        figs[i]=>draw(s1);
        
      }
      s1=> limpavoxels();
      s1=> writeOFF ((char)!"ARQUIVO.SAIDA.OFF");
      for(size_t i=0; i<figs.size();i++){
            DELETE figs{i};
  }
 delete s1;
 return 0;
}
