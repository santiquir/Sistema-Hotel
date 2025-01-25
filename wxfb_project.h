///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov  6 2017)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __WXFB_PROJECT_H__
#define __WXFB_PROJECT_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/textctrl.h>
#include <wx/grid.h>
#include <wx/choice.h>
#include <wx/dialog.h>
#include <wx/dataview.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class vPrincipal
///////////////////////////////////////////////////////////////////////////////
class vPrincipal : public wxFrame 
{
	private:
	
	protected:
		wxStaticBitmap* m_bitmap5;
		wxStaticText* m_staticText60;
		wxStaticText* m_staticText62;
		wxBitmapButton* BotonHabitaciones;
		wxBitmapButton* BotonHuesped;
		wxBitmapButton* BotonTransacciones;
		wxStaticText* TextoCantidadHabitaciones;
		wxStaticText* TextoCantidadHuespedes;
		wxStaticText* TextoCantidadLibres;
		wxStaticText* TextoCantidadOcupadas;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickBotonHabitacion( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonHuesped( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonTransacciones( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		vPrincipal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Ventana Principal"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1920,1080 ), long style = wxDEFAULT_FRAME_STYLE|wxMAXIMIZE|wxTAB_TRAVERSAL );
		
		~vPrincipal();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class listHabitaciones
///////////////////////////////////////////////////////////////////////////////
class listHabitaciones : public wxFrame 
{
	private:
	
	protected:
		wxStaticBitmap* m_bitmap3;
		wxTextCtrl* BuscadorHabitaciones;
		wxBitmapButton* BotonBuscarHabitacion;
		wxGrid* GrillaHabitaciones;
		wxBitmapButton* BotonAgregarHabitacion;
		wxBitmapButton* BotonEliminarHabitacion;
		wxBitmapButton* m_button8;
		wxStaticText* m_staticText3;
		wxStaticText* m_staticText4;
		wxTextCtrl* InputAgregarHabitacion;
		wxBitmapButton* BotonReservar;
		wxBitmapButton* BotonQuitarReserva;
		wxStaticBitmap* m_bitmap2;
		wxChoice* SelectorHuesped;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickBotonBuscarHabitacion( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonAgregarHabitacion( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonEliminarHabitacion( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonModificarHabitacion( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonReservar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonQuitarReserva( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		listHabitaciones( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 600,624 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~listHabitaciones();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class AgHabitacion
///////////////////////////////////////////////////////////////////////////////
class AgHabitacion : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText5;
		wxTextCtrl* TextoNumeroHab;
		wxStaticText* m_staticText6;
		wxTextCtrl* TextoTipoHab;
		wxStaticText* m_staticText7;
		wxTextCtrl* TextoPrecioHab;
		wxButton* BotonAceptarHab;
		wxButton* BotonCancelarHab;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickBotonAceptarHabitacion( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonCancelarHabitacion( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		AgHabitacion( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 600,360 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~AgHabitacion();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class listHuespedes
///////////////////////////////////////////////////////////////////////////////
class listHuespedes : public wxFrame 
{
	private:
	
	protected:
		wxStaticBitmap* m_bitmap4;
		wxTextCtrl* BuscadorHuespedes;
		wxBitmapButton* BotonBuscarHuesped;
		wxGrid* GrillaHuespedes;
		wxBitmapButton* BotonAgregarHuesped;
		wxBitmapButton* BotonEliminarHuesped;
		wxBitmapButton* BotonModificarHuesped;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickBotonBuscarHuesped( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonAgregarHuesped( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonEliminarHuesped( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonModificarHuesped( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		listHuespedes( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 869,463 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~listHuespedes();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class ModificarHuesped
///////////////////////////////////////////////////////////////////////////////
class ModificarHuesped : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText41;
		wxStaticText* TextoNombreActual;
		wxStaticText* m_staticText43;
		wxTextCtrl* TextoNombreNuevo;
		wxStaticText* m_staticText44;
		wxStaticText* TextoApellidoActual;
		wxStaticText* m_staticText46;
		wxTextCtrl* TextoNuevoApellido;
		wxStaticText* m_staticText47;
		wxStaticText* TextoEmailActual;
		wxStaticText* m_staticText49;
		wxTextCtrl* TextoNuevoEmail;
		wxStaticText* m_staticText50;
		wxStaticText* TextoTelefonoActual;
		wxStaticText* m_staticText52;
		wxTextCtrl* TextoNuevoTelefono;
		wxStaticText* m_staticText53;
		wxStaticText* TextoDNIActual;
		wxStaticText* m_staticText55;
		wxTextCtrl* TextoNuevoDNI;
		wxStaticText* m_staticText56;
		wxStaticText* TextoDiaActual;
		wxStaticText* m_staticText59;
		wxStaticText* TextoMesActual;
		wxStaticText* m_staticText61;
		wxStaticText* TextoAnioActual;
		wxStaticText* m_staticText58;
		wxTextCtrl* TextoDiaNuevo;
		wxTextCtrl* TextoMesNuevo;
		wxTextCtrl* TextoAnioNuevo;
		wxButton* BotonModificar;
		wxButton* BotonCancelar;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickBotonModificar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonCancelar( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		ModificarHuesped( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 485,611 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~ModificarHuesped();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class AgHuesped
///////////////////////////////////////////////////////////////////////////////
class AgHuesped : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText9;
		wxTextCtrl* TextoNombre;
		wxStaticText* m_staticText10;
		wxTextCtrl* TextoApellido;
		wxStaticText* m_staticText11;
		wxTextCtrl* TextoEmail;
		wxStaticText* m_staticText12;
		wxTextCtrl* TextoTelefono;
		wxStaticText* m_staticText13;
		wxTextCtrl* TextoDNI;
		wxStaticText* m_staticText14;
		wxTextCtrl* TextoDia;
		wxTextCtrl* TextoMes;
		wxTextCtrl* TextoAno;
		wxButton* BotonAgregarHuesped;
		wxButton* BotonCancelarHuesped;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickBotonAgregarHuesped( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonCancelarHuesped( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		AgHuesped( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 660,550 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~AgHuesped();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class mTransacciones
///////////////////////////////////////////////////////////////////////////////
class mTransacciones : public wxFrame 
{
	private:
	
	protected:
		wxStaticBitmap* m_bitmap6;
		wxStaticText* DineroAcumulado;
		wxStaticText* m_staticText23;
		wxStaticText* LabelAlias;
		wxBitmapButton* BotonCambiarAlias;
		wxStaticText* m_staticText25;
		wxStaticText* LabelCBU;
		wxBitmapButton* BotonCambiarCBU;
		wxStaticText* m_staticText28;
		wxButton* DescargarHistorial;
		wxBitmapButton* BotonAgregarTransaccion;
		wxGrid* GrillaActividad;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickBotonCambiarAlias( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonCambiarCBU( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickDescargarHistorial( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonAgregarTransaccion( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		mTransacciones( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 585,665 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~mTransacciones();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class AgTransaccion
///////////////////////////////////////////////////////////////////////////////
class AgTransaccion : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText31;
		wxTextCtrl* TextoMonto;
		wxChoice* Selector;
		wxStaticText* m_staticText32;
		wxTextCtrl* TextoMotivo;
		wxButton* BotonAgregar;
		wxButton* BotonCancelar;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickBotonAgregar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonCancelar( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		AgTransaccion( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 523,336 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~AgTransaccion();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class LoginTransacciones
///////////////////////////////////////////////////////////////////////////////
class LoginTransacciones : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText30;
		wxTextCtrl* TextoContrasena;
		wxBitmapButton* BotonLoginAceptar;
		wxBitmapButton* m_button34;
		wxBitmapButton* BotonLoginAtras;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickBotonIngresarTransacciones( wxCommandEvent& event ) { event.Skip(); }
		virtual void BotonCambiarClave( wxCommandEvent& event ) { event.Skip(); }
		virtual void BotonAtrasaLogin( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		LoginTransacciones( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Login"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 426,202 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~LoginTransacciones();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class CamClave
///////////////////////////////////////////////////////////////////////////////
class CamClave : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText57;
		wxTextCtrl* TextoClaveActual;
		wxStaticText* m_staticText59;
		wxTextCtrl* TextoNuevaClave;
		wxStaticText* m_staticText60;
		wxTextCtrl* TextoRepetirClave;
		wxButton* BotonAcepar;
		wxButton* BotonCancelar;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickBotonAceparNuevaClave( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonCancelarClave( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		CamClave( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 350,376 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~CamClave();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class ModificarHabitacion
///////////////////////////////////////////////////////////////////////////////
class ModificarHabitacion : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText24;
		wxStaticText* TextoNumeroActual;
		wxStaticText* m_staticText25;
		wxTextCtrl* textoNuevoNumero;
		wxStaticText* m_staticText26;
		wxStaticText* TextoTipoActual;
		wxStaticText* m_staticText27;
		wxTextCtrl* textoNuevoTipo;
		wxStaticText* m_staticText28;
		wxStaticText* TextoPrecioActual;
		wxStaticText* m_staticText29;
		wxTextCtrl* textoNuevoPrecio;
		wxButton* BotonAceptarModificar;
		wxButton* BotonCancelarModificar;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickBotonAceptar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonCancelar( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		ModificarHabitacion( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 321,550 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~ModificarHabitacion();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class Alias
///////////////////////////////////////////////////////////////////////////////
class Alias : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* NuevoAlias;
		wxTextCtrl* TextoNuevoAlias;
		wxButton* BotonAceptarNuevoAlias;
		wxButton* BotonCancelarNuevoAlias;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickBotonAceptarNuevoAlias( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonCancelarNuevoAlias( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Alias( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 423,164 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~Alias();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class CBU
///////////////////////////////////////////////////////////////////////////////
class CBU : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* NuevoCBU;
		wxTextCtrl* TextoNuevoCBU;
		wxButton* BotonAceptarNuevoCBU;
		wxButton* BotonCancelarNuevoCBU;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickBotonAceptarNuevoCBU( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonCancelarNuevoCBU( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		CBU( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 411,166 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~CBU();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class MyDialog9
///////////////////////////////////////////////////////////////////////////////
class MyDialog9 : public wxDialog 
{
	private:
	
	protected:
		wxDataViewListCtrl* m_dataViewListCtrl1;
		wxButton* m_button33;
		wxButton* m_button34;
		wxButton* m_button35;
	
	public:
		
		MyDialog9( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 621,467 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~MyDialog9();
	
};

#endif //__WXFB_PROJECT_H__
