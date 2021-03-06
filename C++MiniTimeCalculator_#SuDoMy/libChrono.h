///////////////////////////////////////////////////////////////////////////////////////////
// Traveaux Pratique C++ r�aliser par Merle Barth�l�my du 26 au 28 Octobre 2020 ///////////
// A utiliser avec le .zip nomm�e "Package TP SuDoMy.zip"
class TChrono {

private:	

protected:
	bool __fastcall IsBetter(int num1, int num2) = 0;
//
//	virtual bool IsBetter(int num1, int num2) const = 0;

public:
	TChrono();
	
	void __fastcall AddBibHours(int bib, __int64 start_hour64, __int64 end_hour64);	
	void __fastcall ComputeClassification();
		
	int __fastcall Count();
	int __fastcall GetNumByPos(int pos);
	int __fastcall GetRank(int num);
	int __fastcall GetTimeByNum(int num);	
	
}
