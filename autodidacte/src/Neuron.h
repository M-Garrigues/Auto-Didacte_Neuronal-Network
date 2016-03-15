 #ifndef H_MG_NEURON
 #define H_MG_NEURON


  /* Neuron.h   -----   LIF7 Auto-Didacte */



enum{	INPUT , HIDDEN , OUTPUT   };


/* Neuron structure */

typedef struct
{

    int type;
    float value;
    int nbWeights;
    float * tabWeights;

} Neuron;



/* Neuron constructors */
Neuron * newInputNeuron(int nbHiddenNeuron);
Neuron * newHiddenNeuron(int nbOutputNeuron);
Neuron * newOutputNeuron(void);

/* Neuron get/set */
float getValue(const Neuron * neuron);
void  setValue(Neuron * neuron, float newValue);

float getWeight(const Neuron * neuron, int i);
void  setWeight(Neuron * neuron, int i, float newWeight);

int getTypeNeuron(const Neuron * neuron);
void setTypeNeuron(Neuron * neuron, int newType);

int getNbWeights(const Neuron * neuron);
void setNbWeights(Neuron * neuron,int newNbWeights);

/* Neuron functions */
void  updateNeuron(Neuron * neuron);

/* Neuron destructor */
void deleteNeuron(Neuron * neuron);

#endif
