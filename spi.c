#include <xc.h>
void main(void)
{
	/*Configuracion de registros de direccion*/
	TRISBbits.TRISB0 = 0;
	TRISBbits.TRISC3 = 0;
	TRISBbits.TRISC4 = 1;
	TRISBbits.TRISC5 = 0;

	/*Input data is sampled at the end of input data time*/
	SSPSTAbits.SMP = 1;
	/*Transmit occurs on transition from Idle to active clock state*/
	SSPSTAbits.CKE = 0;
	/* Enables serial port and configure SCK, SDO, SDI, and SS as seria port pins*/
	SSPCONbits.SSPEN = 1;
	/*SSPM = 0000 = master mode Fosc/4*/
	SSPCONbits.SSPM = 0;
	/* Idle state for clock is a low level */
	SSPCONbits.CKP = 0;

	int i = 0;
	unsigned char a;

	while(1)
	{

		/*delay*/
		for (i = 0; i < 500; i++);

		/* Chip select low*/
		PORTBbits.RB0 = 0;


		/* delay */
		for (i = 0; i < 500; i++);
			
		/* when data received */
		if (SSPSTAbits.BF == 1)
			{
				/* store to temp variable */
				a = SSPBUF;
				/* chip select high */
				PORTBbits.RB0 = 1;
			}
		for (i = 0; i < 500; i++);

		/* chip select low */
		PORTBbits.RB0 = 0;
		
		/* write data to buffer */
		SSPBUF = 0x75;
		
		/* delay */
		for ( i = 0; i < 500; i++);

		/* chip select low */
		PORTBbits.RB0 = 0;
		
		/* write data to buffer */
		SSPBUF = 0x075;
		
		/* delay */
		for (i = 0; i < 500; i++);

		/* chip select high */
		PORTBbits.RB0 = 1;
		
	}
}