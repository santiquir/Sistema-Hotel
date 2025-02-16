///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov  6 2017)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

///////////////////////////////////////////////////////////////////////////

vPrincipal::vPrincipal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer83;
	bSizer83 = new wxBoxSizer( wxVERTICAL );
	
	m_bitmap5 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Imagenes/hotel.PNG"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer83->Add( m_bitmap5, 0, wxALL, 0 );
	
	
	bSizer2->Add( bSizer83, 0, 0, 5 );
	
	wxBoxSizer* bSizer84;
	bSizer84 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText60 = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText60->Wrap( -1 );
	bSizer5->Add( m_staticText60, 0, wxALL, 60 );
	
	
	bSizer84->Add( bSizer5, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText62 = new wxStaticText( this, wxID_ANY, wxT("CONTROLADOR HOTEL"), wxDefaultPosition, wxSize( 275,110 ), wxALIGN_CENTRE );
	m_staticText62->Wrap( -1 );
	m_staticText62->SetFont( wxFont( 24, wxFONTFAMILY_ROMAN, wxFONTSTYLE_ITALIC, wxFONTWEIGHT_BOLD, false, wxT("Baskerville Old Face") ) );
	m_staticText62->SetForegroundColour( wxColour( 65, 90, 119 ) );
	m_staticText62->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	
	bSizer4->Add( m_staticText62, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer84->Add( bSizer4, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer88;
	bSizer88 = new wxBoxSizer( wxVERTICAL );
	
	BotonReservas = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_reservas (1).png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonReservas->SetBitmapHover( wxBitmap( wxT("Imagenes/button_reservas.png"), wxBITMAP_TYPE_ANY ) );
	bSizer88->Add( BotonReservas, 0, wxALL, 25 );
	
	
	bSizer84->Add( bSizer88, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer841;
	bSizer841 = new wxBoxSizer( wxVERTICAL );
	
	BotonTransacciones = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_transacciones hover.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonTransacciones->SetBitmapHover( wxBitmap( wxT("Imagenes/button_transacciones.png"), wxBITMAP_TYPE_ANY ) );
	bSizer841->Add( BotonTransacciones, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 25 );
	
	
	bSizer84->Add( bSizer841, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );
	
	BotonHabitaciones = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_habitaciones hover.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxSize( -1,-1 ), wxBU_AUTODRAW );
	
	BotonHabitaciones->SetBitmapHover( wxBitmap( wxT("Imagenes/button_habitaciones.png"), wxBITMAP_TYPE_ANY ) );
	bSizer6->Add( BotonHabitaciones, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 25 );
	
	
	bSizer84->Add( bSizer6, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer85;
	bSizer85 = new wxBoxSizer( wxVERTICAL );
	
	BotonHuesped = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_huespedes hover.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonHuesped->SetBitmapHover( wxBitmap( wxT("Imagenes/button_huespedes.png"), wxBITMAP_TYPE_ANY ) );
	bSizer85->Add( BotonHuesped, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 25 );
	
	
	bSizer84->Add( bSizer85, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer86;
	bSizer86 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText63 = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText63->Wrap( -1 );
	bSizer86->Add( m_staticText63, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer84->Add( bSizer86, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 45 );
	
	
	bSizer2->Add( bSizer84, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer2 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	BotonReservas->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( vPrincipal::ClickBotonReservas ), NULL, this );
	BotonTransacciones->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( vPrincipal::ClickBotonTransacciones ), NULL, this );
	BotonHabitaciones->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( vPrincipal::ClickBotonHabitacion ), NULL, this );
	BotonHuesped->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( vPrincipal::ClickBotonHuesped ), NULL, this );
}

vPrincipal::~vPrincipal()
{
	// Disconnect Events
	BotonReservas->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( vPrincipal::ClickBotonReservas ), NULL, this );
	BotonTransacciones->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( vPrincipal::ClickBotonTransacciones ), NULL, this );
	BotonHabitaciones->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( vPrincipal::ClickBotonHabitacion ), NULL, this );
	BotonHuesped->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( vPrincipal::ClickBotonHuesped ), NULL, this );
	
}

ReservasHab::ReservasHab( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	
	wxBoxSizer* bSizer89;
	bSizer89 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer91;
	bSizer91 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer94;
	bSizer94 = new wxBoxSizer( wxVERTICAL );
	
	m_panel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	wxGridSizer* gSizer1;
	gSizer1 = new wxGridSizer( 0, 2, 0, 0 );
	
	checkReservadas = new wxCheckBox( m_panel, wxID_ANY, wxT("Reservadas / Libres"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( checkReservadas, 0, wxALL, 5 );
	
	checkOcupadas = new wxCheckBox( m_panel, wxID_ANY, wxT("Ocupadas"), wxDefaultPosition, wxDefaultSize, 0 );
	checkOcupadas->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	
	gSizer1->Add( checkOcupadas, 0, wxALL, 5 );
	
	checkMasSi = new wxCheckBox( m_panel, wxID_ANY, wxT("+7500"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( checkMasSi, 0, wxALL, 5 );
	
	checkMenosSi = new wxCheckBox( m_panel, wxID_ANY, wxT("-7500"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( checkMenosSi, 0, wxALL, 5 );
	
	checkSimples = new wxCheckBox( m_panel, wxID_ANY, wxT("Simples"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( checkSimples, 0, wxALL, 5 );
	
	checkDobles = new wxCheckBox( m_panel, wxID_ANY, wxT("Dobles"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( checkDobles, 0, wxALL, 5 );
	
	checkVip = new wxCheckBox( m_panel, wxID_ANY, wxT("Vip"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( checkVip, 0, wxALL, 5 );
	
	checkCapacidadMasCuatro = new wxCheckBox( m_panel, wxID_ANY, wxT("Capa. +4"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( checkCapacidadMasCuatro, 0, wxALL, 5 );
	
	checkCapacidadMenosCuatro = new wxCheckBox( m_panel, wxID_ANY, wxT("Capa. -4"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( checkCapacidadMenosCuatro, 0, wxALL, 5 );
	
	checkSinReservas = new wxCheckBox( m_panel, wxID_ANY, wxT("Hue. sin reservas"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( checkSinReservas, 0, wxALL, 5 );
	
	checkConReservas = new wxCheckBox( m_panel, wxID_ANY, wxT("Hue. con reservas"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( checkConReservas, 0, wxALL, 5 );
	
	checkOcupando = new wxCheckBox( m_panel, wxID_ANY, wxT("Hue. ocupando"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( checkOcupando, 0, wxALL, 5 );
	
	
	m_panel->SetSizer( gSizer1 );
	m_panel->Layout();
	gSizer1->Fit( m_panel );
	bSizer94->Add( m_panel, 1, wxEXPAND | wxALL, 5 );
	
	
	bSizer91->Add( bSizer94, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer93;
	bSizer93 = new wxBoxSizer( wxVERTICAL );
	
	textinvisible = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	textinvisible->Wrap( -1 );
	bSizer93->Add( textinvisible, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 10 );
	
	BotonDesplegarPanel = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/menu.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonDesplegarPanel->SetBitmapHover( wxBitmap( wxT("Imagenes/menu (1).png"), wxBITMAP_TYPE_ANY ) );
	bSizer93->Add( BotonDesplegarPanel, 0, wxALL|wxALIGN_RIGHT, 5 );
	
	BotonAplicar = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_aplicar (1).png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonAplicar->SetBitmapHover( wxBitmap( wxT("Imagenes/button_aplicar.png"), wxBITMAP_TYPE_ANY ) );
	bSizer93->Add( BotonAplicar, 0, wxALL, 5 );
	
	
	bSizer91->Add( bSizer93, 0, wxEXPAND, 5 );
	
	
	bSizer89->Add( bSizer91, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer92;
	bSizer92 = new wxBoxSizer( wxVERTICAL );
	
	listaHab = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	listaHab->CreateGrid( 0, 4 );
	listaHab->EnableEditing( true );
	listaHab->EnableGridLines( true );
	listaHab->EnableDragGridSize( false );
	listaHab->SetMargins( 0, 0 );
	
	// Columns
	listaHab->SetColSize( 0, 80 );
	listaHab->SetColSize( 1, 80 );
	listaHab->SetColSize( 2, 80 );
	listaHab->SetColSize( 3, 103 );
	listaHab->EnableDragColMove( false );
	listaHab->EnableDragColSize( true );
	listaHab->SetColLabelSize( 30 );
	listaHab->SetColLabelValue( 0, wxT("Número") );
	listaHab->SetColLabelValue( 1, wxT("Tipo") );
	listaHab->SetColLabelValue( 2, wxT("Precio") );
	listaHab->SetColLabelValue( 3, wxT("Capacidad") );
	listaHab->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	listaHab->EnableDragRowSize( true );
	listaHab->SetRowLabelSize( 0 );
	listaHab->SetRowLabelValue( 0, wxT("Número") );
	listaHab->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	listaHab->SetLabelBackgroundColour( wxColour( 13, 27, 42 ) );
	listaHab->SetLabelFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	listaHab->SetLabelTextColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	
	// Cell Defaults
	listaHab->SetDefaultCellFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	listaHab->SetDefaultCellAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	bSizer92->Add( listaHab, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer89->Add( bSizer92, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer90;
	bSizer90 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Reservas habitaciones"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	m_staticText3->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer9->Add( m_staticText3, 0, wxALL|wxEXPAND, 15 );
	
	
	bSizer90->Add( bSizer9, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("N°"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	m_staticText4->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Impact") ) );
	
	bSizer12->Add( m_staticText4, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxArrayString SelectorHabitacionChoices;
	SelectorHabitacion = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, SelectorHabitacionChoices, 0 );
	SelectorHabitacion->SetSelection( 0 );
	bSizer12->Add( SelectorHabitacion, 0, wxALL, 5 );
	
	m_staticText64 = new wxStaticText( this, wxID_ANY, wxT("Entrada"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText64->Wrap( -1 );
	m_staticText64->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer12->Add( m_staticText64, 0, wxALL, 5 );
	
	FechaEntrada = new wxDatePickerCtrl( this, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT );
	FechaEntrada->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer12->Add( FechaEntrada, 0, wxALL, 5 );
	
	m_staticText65 = new wxStaticText( this, wxID_ANY, wxT("Salida"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText65->Wrap( -1 );
	m_staticText65->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer12->Add( m_staticText65, 0, wxALL, 5 );
	
	FechaSalida = new wxDatePickerCtrl( this, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT );
	FechaSalida->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer12->Add( FechaSalida, 0, wxALL, 5 );
	
	checkAplicarFiltros = new wxCheckBox( this, wxID_ANY, wxT("Aplicar Filtros"), wxDefaultPosition, wxDefaultSize, 0 );
	checkAplicarFiltros->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer12->Add( checkAplicarFiltros, 0, wxALL, 5 );
	
	
	bSizer90->Add( bSizer12, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer80;
	bSizer80 = new wxBoxSizer( wxHORIZONTAL );
	
	m_bitmap2 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Imagenes/perfil.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer80->Add( m_bitmap2, 0, wxALL, 5 );
	
	wxArrayString SelectorHuespedChoices;
	SelectorHuesped = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, SelectorHuespedChoices, 0 );
	SelectorHuesped->SetSelection( 0 );
	SelectorHuesped->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer80->Add( SelectorHuesped, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	BotonAgregarPersona = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_agregar.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonAgregarPersona->SetBitmapHover( wxBitmap( wxT("Imagenes/button_agregar hover.png"), wxBITMAP_TYPE_ANY ) );
	bSizer80->Add( BotonAgregarPersona, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer90->Add( bSizer80, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer86;
	bSizer86 = new wxBoxSizer( wxHORIZONTAL );
	
	BotonReservar = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_reservar.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonReservar->SetBitmapHover( wxBitmap( wxT("Imagenes/button_reservar hover.png"), wxBITMAP_TYPE_ANY ) );
	bSizer86->Add( BotonReservar, 0, wxALL|wxEXPAND, 5 );
	
	BotonQuitarReserva = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_quitar-reserva.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonQuitarReserva->SetBitmapHover( wxBitmap( wxT("Imagenes/button_quitar-reserva hover.png"), wxBITMAP_TYPE_ANY ) );
	bSizer86->Add( BotonQuitarReserva, 0, wxALL|wxEXPAND, 5 );
	
	BotonCalendario = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_calendario.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonCalendario->SetBitmapHover( wxBitmap( wxT("Imagenes/button_calendario (1).png"), wxBITMAP_TYPE_ANY ) );
	bSizer86->Add( BotonCalendario, 0, wxALL, 5 );
	
	
	bSizer90->Add( bSizer86, 0, 0, 5 );
	
	
	bSizer89->Add( bSizer90, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer89 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	BotonDesplegarPanel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ReservasHab::ClickBotonDesplegarPanel ), NULL, this );
	BotonAplicar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ReservasHab::ClickBotonAplicarFiltro ), NULL, this );
	BotonAgregarPersona->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ReservasHab::ClickBotonAgregarPersona ), NULL, this );
	BotonReservar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ReservasHab::ClickBotonReservar ), NULL, this );
	BotonQuitarReserva->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ReservasHab::ClickBotonQuitarReserva ), NULL, this );
	BotonCalendario->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ReservasHab::ClickBotonCalendario ), NULL, this );
}

ReservasHab::~ReservasHab()
{
	// Disconnect Events
	BotonDesplegarPanel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ReservasHab::ClickBotonDesplegarPanel ), NULL, this );
	BotonAplicar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ReservasHab::ClickBotonAplicarFiltro ), NULL, this );
	BotonAgregarPersona->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ReservasHab::ClickBotonAgregarPersona ), NULL, this );
	BotonReservar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ReservasHab::ClickBotonReservar ), NULL, this );
	BotonQuitarReserva->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ReservasHab::ClickBotonQuitarReserva ), NULL, this );
	BotonCalendario->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ReservasHab::ClickBotonCalendario ), NULL, this );
	
}

listHabitaciones::listHabitaciones( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );
	
	m_bitmap3 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Imagenes/camas-dobles.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_bitmap3, 0, wxALL, 5 );
	
	BuscadorHabitaciones = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	BuscadorHabitaciones->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	
	bSizer8->Add( BuscadorHabitaciones, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	BotonBuscarHabitacion = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_buscar.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonBuscarHabitacion->SetBitmapHover( wxBitmap( wxT("Imagenes/button_buscar hover.png"), wxBITMAP_TYPE_ANY ) );
	bSizer8->Add( BotonBuscarHabitacion, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer7->Add( bSizer8, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );
	
	GrillaHabitaciones = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	GrillaHabitaciones->CreateGrid( 0, 4 );
	GrillaHabitaciones->EnableEditing( true );
	GrillaHabitaciones->EnableGridLines( true );
	GrillaHabitaciones->SetGridLineColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	GrillaHabitaciones->EnableDragGridSize( false );
	GrillaHabitaciones->SetMargins( 0, 0 );
	
	// Columns
	GrillaHabitaciones->SetColSize( 0, 98 );
	GrillaHabitaciones->SetColSize( 1, 141 );
	GrillaHabitaciones->SetColSize( 2, 163 );
	GrillaHabitaciones->SetColSize( 3, 104 );
	GrillaHabitaciones->EnableDragColMove( false );
	GrillaHabitaciones->EnableDragColSize( true );
	GrillaHabitaciones->SetColLabelSize( 30 );
	GrillaHabitaciones->SetColLabelValue( 0, wxT("Número") );
	GrillaHabitaciones->SetColLabelValue( 1, wxT("Tipo") );
	GrillaHabitaciones->SetColLabelValue( 2, wxT("Precio") );
	GrillaHabitaciones->SetColLabelValue( 3, wxT("Capacidad") );
	GrillaHabitaciones->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	GrillaHabitaciones->EnableDragRowSize( true );
	GrillaHabitaciones->SetRowLabelSize( 0 );
	GrillaHabitaciones->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	GrillaHabitaciones->SetLabelBackgroundColour( wxColour( 13, 27, 42 ) );
	GrillaHabitaciones->SetLabelFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	GrillaHabitaciones->SetLabelTextColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	
	// Cell Defaults
	GrillaHabitaciones->SetDefaultCellFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	GrillaHabitaciones->SetDefaultCellAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	bSizer11->Add( GrillaHabitaciones, 0, wxALL|wxEXPAND, 5 );
	
	
	bSizer7->Add( bSizer11, 1, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );
	
	BotonAgregarHabitacion = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_agregar.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonAgregarHabitacion->SetBitmapHover( wxBitmap( wxT("Imagenes/button_agregar hover.png"), wxBITMAP_TYPE_ANY ) );
	bSizer10->Add( BotonAgregarHabitacion, 0, wxALL, 5 );
	
	BotonEliminarHabitacion = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_eliminar.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonEliminarHabitacion->SetBitmapHover( wxBitmap( wxT("Imagenes/button_eliminar hover.png"), wxBITMAP_TYPE_ANY ) );
	bSizer10->Add( BotonEliminarHabitacion, 0, wxALL, 5 );
	
	m_button8 = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_modificar.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	m_button8->SetBitmapHover( wxBitmap( wxT("Imagenes/button_modificar hover.png"), wxBITMAP_TYPE_ANY ) );
	bSizer10->Add( m_button8, 0, wxALL, 5 );
	
	
	bSizer7->Add( bSizer10, 0, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer7 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	BotonBuscarHabitacion->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( listHabitaciones::ClickBotonBuscarHabitacion ), NULL, this );
	BotonAgregarHabitacion->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( listHabitaciones::ClickBotonAgregarHabitacion ), NULL, this );
	BotonEliminarHabitacion->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( listHabitaciones::ClickBotonEliminarHabitacion ), NULL, this );
	m_button8->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( listHabitaciones::ClickBotonModificarHabitacion ), NULL, this );
}

listHabitaciones::~listHabitaciones()
{
	// Disconnect Events
	BotonBuscarHabitacion->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( listHabitaciones::ClickBotonBuscarHabitacion ), NULL, this );
	BotonAgregarHabitacion->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( listHabitaciones::ClickBotonAgregarHabitacion ), NULL, this );
	BotonEliminarHabitacion->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( listHabitaciones::ClickBotonEliminarHabitacion ), NULL, this );
	m_button8->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( listHabitaciones::ClickBotonModificarHabitacion ), NULL, this );
	
}

Calendario::Calendario( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	
	wxBoxSizer* bSizer84;
	bSizer84 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer85;
	bSizer85 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText66 = new wxStaticText( this, wxID_ANY, wxT("N°"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText66->Wrap( -1 );
	m_staticText66->SetFont( wxFont( 15, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer85->Add( m_staticText66, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxArrayString TextoNumeroHabReservaChoices;
	TextoNumeroHabReserva = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, TextoNumeroHabReservaChoices, 0 );
	TextoNumeroHabReserva->SetSelection( 0 );
	TextoNumeroHabReserva->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer85->Add( TextoNumeroHabReserva, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	BotonBuscarReservas = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_buscar.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonBuscarReservas->SetBitmapHover( wxBitmap( wxT("Imagenes/button_buscar hover.png"), wxBITMAP_TYPE_ANY ) );
	bSizer85->Add( BotonBuscarReservas, 0, wxALL, 5 );
	
	
	bSizer84->Add( bSizer85, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer87;
	bSizer87 = new wxBoxSizer( wxVERTICAL );
	
	m_calendario = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	m_calendario->CreateGrid( 0, 3 );
	m_calendario->EnableEditing( true );
	m_calendario->EnableGridLines( true );
	m_calendario->EnableDragGridSize( false );
	m_calendario->SetMargins( 0, 0 );
	
	// Columns
	m_calendario->SetColSize( 0, 105 );
	m_calendario->SetColSize( 1, 125 );
	m_calendario->SetColSize( 2, 187 );
	m_calendario->EnableDragColMove( false );
	m_calendario->EnableDragColSize( true );
	m_calendario->SetColLabelSize( 30 );
	m_calendario->SetColLabelValue( 0, wxT("Entrada") );
	m_calendario->SetColLabelValue( 1, wxT("Salida") );
	m_calendario->SetColLabelValue( 2, wxT("Titular") );
	m_calendario->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_calendario->EnableDragRowSize( true );
	m_calendario->SetRowLabelSize( 0 );
	m_calendario->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	m_calendario->SetLabelBackgroundColour( wxColour( 13, 27, 42 ) );
	m_calendario->SetLabelFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	m_calendario->SetLabelTextColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	
	// Cell Defaults
	m_calendario->SetDefaultCellFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	m_calendario->SetDefaultCellAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	m_calendario->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer87->Add( m_calendario, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer84->Add( bSizer87, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer88;
	bSizer88 = new wxBoxSizer( wxHORIZONTAL );
	
	wxArrayString SelectorPersonaChoices;
	SelectorPersona = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, SelectorPersonaChoices, 0 );
	SelectorPersona->SetSelection( 0 );
	SelectorPersona->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer88->Add( SelectorPersona, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	BotonOcupar = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_ocupar.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonOcupar->SetBitmapHover( wxBitmap( wxT("Imagenes/button_ocupar (1).png"), wxBITMAP_TYPE_ANY ) );
	bSizer88->Add( BotonOcupar, 0, wxALL, 5 );
	
	
	bSizer84->Add( bSizer88, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer84 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	BotonBuscarReservas->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Calendario::ClickBotonBuscarReservas ), NULL, this );
	BotonOcupar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Calendario::ClickBotonOcupar ), NULL, this );
}

Calendario::~Calendario()
{
	// Disconnect Events
	BotonBuscarReservas->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Calendario::ClickBotonBuscarReservas ), NULL, this );
	BotonOcupar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Calendario::ClickBotonOcupar ), NULL, this );
	
}

AgHabitacion::AgHabitacion( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 600,360 ), wxSize( 600,360 ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("Número:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	m_staticText5->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer14->Add( m_staticText5, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextoNumeroHab = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( TextoNumeroHab, 1, wxALL, 25 );
	
	
	bSizer13->Add( bSizer14, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("Tipo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	m_staticText6->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer17->Add( m_staticText6, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextoTipoHab = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( TextoTipoHab, 1, wxALL, 25 );
	
	
	bSizer13->Add( bSizer17, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer95;
	bSizer95 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText63 = new wxStaticText( this, wxID_ANY, wxT("Capacidad:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText63->Wrap( -1 );
	m_staticText63->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer95->Add( m_staticText63, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextoCapacidad = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoCapacidad->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	
	bSizer95->Add( TextoCapacidad, 1, wxALL, 25 );
	
	
	bSizer13->Add( bSizer95, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Precio:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	m_staticText7->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer16->Add( m_staticText7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextoPrecioHab = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer16->Add( TextoPrecioHab, 1, wxALL, 25 );
	
	
	bSizer13->Add( bSizer16, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer30;
	bSizer30 = new wxBoxSizer( wxHORIZONTAL );
	
	BotonAceptarHab = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_aceptar.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonAceptarHab->SetBitmapHover( wxBitmap( wxT("Imagenes/button_aceptar (3).png"), wxBITMAP_TYPE_ANY ) );
	bSizer30->Add( BotonAceptarHab, 0, wxALL, 5 );
	
	BotonCancelarHab = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_cancelar (1).png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonCancelarHab->SetBitmapHover( wxBitmap( wxT("Imagenes/button_cancelar.png"), wxBITMAP_TYPE_ANY ) );
	bSizer30->Add( BotonCancelarHab, 0, wxALL, 5 );
	
	
	bSizer13->Add( bSizer30, 0, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer13 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	BotonAceptarHab->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AgHabitacion::ClickBotonAceptarHabitacion ), NULL, this );
	BotonCancelarHab->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AgHabitacion::ClickBotonCancelarHabitacion ), NULL, this );
}

AgHabitacion::~AgHabitacion()
{
	// Disconnect Events
	BotonAceptarHab->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AgHabitacion::ClickBotonAceptarHabitacion ), NULL, this );
	BotonCancelarHab->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AgHabitacion::ClickBotonCancelarHabitacion ), NULL, this );
	
}

listHuespedes::listHuespedes( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	
	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxHORIZONTAL );
	
	m_bitmap4 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Imagenes/perfil.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer19->Add( m_bitmap4, 0, wxALL, 5 );
	
	BuscadorHuespedes = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer19->Add( BuscadorHuespedes, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	BotonBuscarHuesped = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_buscar.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonBuscarHuesped->SetBitmapHover( wxBitmap( wxT("Imagenes/button_buscar hover.png"), wxBITMAP_TYPE_ANY ) );
	bSizer19->Add( BotonBuscarHuesped, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer18->Add( bSizer19, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxVERTICAL );
	
	GrillaHuespedes = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	GrillaHuespedes->CreateGrid( 0, 8 );
	GrillaHuespedes->EnableEditing( true );
	GrillaHuespedes->EnableGridLines( true );
	GrillaHuespedes->EnableDragGridSize( false );
	GrillaHuespedes->SetMargins( 0, 0 );
	
	// Columns
	GrillaHuespedes->SetColSize( 0, 100 );
	GrillaHuespedes->SetColSize( 1, 105 );
	GrillaHuespedes->SetColSize( 2, 178 );
	GrillaHuespedes->SetColSize( 3, 109 );
	GrillaHuespedes->SetColSize( 4, 104 );
	GrillaHuespedes->SetColSize( 5, 109 );
	GrillaHuespedes->SetColSize( 6, 80 );
	GrillaHuespedes->SetColSize( 7, 112 );
	GrillaHuespedes->EnableDragColMove( false );
	GrillaHuespedes->EnableDragColSize( true );
	GrillaHuespedes->SetColLabelSize( 30 );
	GrillaHuespedes->SetColLabelValue( 0, wxT("Apellido") );
	GrillaHuespedes->SetColLabelValue( 1, wxT("Nombre") );
	GrillaHuespedes->SetColLabelValue( 2, wxT("Email") );
	GrillaHuespedes->SetColLabelValue( 3, wxT("Telefono") );
	GrillaHuespedes->SetColLabelValue( 4, wxT("DNI") );
	GrillaHuespedes->SetColLabelValue( 5, wxT("Fecha Nas") );
	GrillaHuespedes->SetColLabelValue( 6, wxT("Nro Hab") );
	GrillaHuespedes->SetColLabelValue( 7, wxT("Rol") );
	GrillaHuespedes->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	GrillaHuespedes->EnableDragRowSize( true );
	GrillaHuespedes->SetRowLabelSize( 0 );
	GrillaHuespedes->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	GrillaHuespedes->SetLabelBackgroundColour( wxColour( 13, 27, 42 ) );
	GrillaHuespedes->SetLabelFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	GrillaHuespedes->SetLabelTextColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	
	// Cell Defaults
	GrillaHuespedes->SetDefaultCellFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	GrillaHuespedes->SetDefaultCellAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	bSizer20->Add( GrillaHuespedes, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer18->Add( bSizer20, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxHORIZONTAL );
	
	BotonAgregarHuesped = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_agregar.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonAgregarHuesped->SetBitmapHover( wxBitmap( wxT("Imagenes/button_agregar hover.png"), wxBITMAP_TYPE_ANY ) );
	bSizer22->Add( BotonAgregarHuesped, 0, wxALL, 5 );
	
	BotonEliminarHuesped = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_eliminar.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonEliminarHuesped->SetBitmapHover( wxBitmap( wxT("Imagenes/button_eliminar hover.png"), wxBITMAP_TYPE_ANY ) );
	bSizer22->Add( BotonEliminarHuesped, 0, wxALL, 5 );
	
	BotonModificarHuesped = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_modificar.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonModificarHuesped->SetBitmapHover( wxBitmap( wxT("Imagenes/button_modificar hover.png"), wxBITMAP_TYPE_ANY ) );
	bSizer22->Add( BotonModificarHuesped, 0, wxALL, 5 );
	
	
	bSizer18->Add( bSizer22, 0, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer18 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	BotonBuscarHuesped->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( listHuespedes::ClickBotonBuscarHuesped ), NULL, this );
	BotonAgregarHuesped->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( listHuespedes::ClickBotonAgregarHuesped ), NULL, this );
	BotonEliminarHuesped->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( listHuespedes::ClickBotonEliminarHuesped ), NULL, this );
	BotonModificarHuesped->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( listHuespedes::ClickBotonModificarHuesped ), NULL, this );
}

listHuespedes::~listHuespedes()
{
	// Disconnect Events
	BotonBuscarHuesped->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( listHuespedes::ClickBotonBuscarHuesped ), NULL, this );
	BotonAgregarHuesped->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( listHuespedes::ClickBotonAgregarHuesped ), NULL, this );
	BotonEliminarHuesped->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( listHuespedes::ClickBotonEliminarHuesped ), NULL, this );
	BotonModificarHuesped->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( listHuespedes::ClickBotonModificarHuesped ), NULL, this );
	
}

ModificarHuesped::ModificarHuesped( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	
	wxBoxSizer* bSizer64;
	bSizer64 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer65;
	bSizer65 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText41 = new wxStaticText( this, wxID_ANY, wxT("Nombre actual:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText41->Wrap( -1 );
	m_staticText41->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer65->Add( m_staticText41, 0, wxALL, 5 );
	
	TextoNombreActual = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoNombreActual->Wrap( -1 );
	TextoNombreActual->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer65->Add( TextoNombreActual, 0, wxALL, 5 );
	
	
	bSizer64->Add( bSizer65, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer70;
	bSizer70 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText43 = new wxStaticText( this, wxID_ANY, wxT("Nuevo nombre:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText43->Wrap( -1 );
	m_staticText43->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer70->Add( m_staticText43, 0, wxALL, 5 );
	
	TextoNombreNuevo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoNombreNuevo->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer70->Add( TextoNombreNuevo, 1, wxALL, 5 );
	
	
	bSizer64->Add( bSizer70, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer69;
	bSizer69 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText44 = new wxStaticText( this, wxID_ANY, wxT("Apellido actual:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText44->Wrap( -1 );
	m_staticText44->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer69->Add( m_staticText44, 0, wxALL, 5 );
	
	TextoApellidoActual = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoApellidoActual->Wrap( -1 );
	TextoApellidoActual->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer69->Add( TextoApellidoActual, 0, wxALL, 5 );
	
	
	bSizer64->Add( bSizer69, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer68;
	bSizer68 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText46 = new wxStaticText( this, wxID_ANY, wxT("Nuevo apellido:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText46->Wrap( -1 );
	m_staticText46->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer68->Add( m_staticText46, 0, wxALL, 5 );
	
	TextoNuevoApellido = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoNuevoApellido->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer68->Add( TextoNuevoApellido, 1, wxALL, 5 );
	
	
	bSizer64->Add( bSizer68, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer67;
	bSizer67 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText47 = new wxStaticText( this, wxID_ANY, wxT("Email actual:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText47->Wrap( -1 );
	m_staticText47->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer67->Add( m_staticText47, 0, wxALL, 5 );
	
	TextoEmailActual = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoEmailActual->Wrap( -1 );
	TextoEmailActual->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer67->Add( TextoEmailActual, 0, wxALL, 5 );
	
	
	bSizer64->Add( bSizer67, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer66;
	bSizer66 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText49 = new wxStaticText( this, wxID_ANY, wxT("Nuevo email:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText49->Wrap( -1 );
	m_staticText49->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer66->Add( m_staticText49, 0, wxALL, 5 );
	
	TextoNuevoEmail = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoNuevoEmail->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer66->Add( TextoNuevoEmail, 1, wxALL, 5 );
	
	
	bSizer64->Add( bSizer66, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer71;
	bSizer71 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText50 = new wxStaticText( this, wxID_ANY, wxT("Teléfono actual:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText50->Wrap( -1 );
	m_staticText50->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer71->Add( m_staticText50, 0, wxALL, 5 );
	
	TextoTelefonoActual = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoTelefonoActual->Wrap( -1 );
	TextoTelefonoActual->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer71->Add( TextoTelefonoActual, 0, wxALL, 5 );
	
	
	bSizer64->Add( bSizer71, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer75;
	bSizer75 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText52 = new wxStaticText( this, wxID_ANY, wxT("Nuevo Teléfono:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText52->Wrap( -1 );
	m_staticText52->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer75->Add( m_staticText52, 0, wxALL, 5 );
	
	TextoNuevoTelefono = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoNuevoTelefono->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer75->Add( TextoNuevoTelefono, 1, wxALL, 5 );
	
	
	bSizer64->Add( bSizer75, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer74;
	bSizer74 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText53 = new wxStaticText( this, wxID_ANY, wxT("DNI actual:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText53->Wrap( -1 );
	m_staticText53->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer74->Add( m_staticText53, 0, wxALL, 5 );
	
	TextoDNIActual = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoDNIActual->Wrap( -1 );
	TextoDNIActual->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer74->Add( TextoDNIActual, 0, wxALL, 5 );
	
	
	bSizer64->Add( bSizer74, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer73;
	bSizer73 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText55 = new wxStaticText( this, wxID_ANY, wxT("Nuevo DNI:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText55->Wrap( -1 );
	m_staticText55->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer73->Add( m_staticText55, 0, wxALL, 5 );
	
	TextoNuevoDNI = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoNuevoDNI->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer73->Add( TextoNuevoDNI, 1, wxALL, 5 );
	
	
	bSizer64->Add( bSizer73, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer72;
	bSizer72 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText56 = new wxStaticText( this, wxID_ANY, wxT("Fecha actual:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText56->Wrap( -1 );
	m_staticText56->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer72->Add( m_staticText56, 0, wxALL, 5 );
	
	TextoDiaActual = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoDiaActual->Wrap( -1 );
	TextoDiaActual->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer72->Add( TextoDiaActual, 0, wxALL, 5 );
	
	m_staticText59 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText59->Wrap( -1 );
	m_staticText59->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer72->Add( m_staticText59, 0, wxALL, 5 );
	
	TextoMesActual = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoMesActual->Wrap( -1 );
	TextoMesActual->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer72->Add( TextoMesActual, 0, wxALL, 5 );
	
	m_staticText61 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText61->Wrap( -1 );
	m_staticText61->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer72->Add( m_staticText61, 0, wxALL, 5 );
	
	TextoAnioActual = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoAnioActual->Wrap( -1 );
	TextoAnioActual->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer72->Add( TextoAnioActual, 0, wxALL, 5 );
	
	
	bSizer64->Add( bSizer72, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer76;
	bSizer76 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText58 = new wxStaticText( this, wxID_ANY, wxT("Nueva fecha:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText58->Wrap( -1 );
	m_staticText58->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer76->Add( m_staticText58, 0, wxALL, 5 );
	
	TextoDiaNuevo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoDiaNuevo->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer76->Add( TextoDiaNuevo, 1, wxALL, 5 );
	
	TextoMesNuevo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoMesNuevo->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer76->Add( TextoMesNuevo, 1, wxALL, 5 );
	
	TextoAnioNuevo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoAnioNuevo->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer76->Add( TextoAnioNuevo, 1, wxALL, 5 );
	
	
	bSizer64->Add( bSizer76, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer711;
	bSizer711 = new wxBoxSizer( wxHORIZONTAL );
	
	BotonModificar = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_modificar.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonModificar->SetBitmapHover( wxBitmap( wxT("Imagenes/button_modificar hover.png"), wxBITMAP_TYPE_ANY ) );
	bSizer711->Add( BotonModificar, 0, wxALL, 5 );
	
	BotonCancelar = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_cancelar (1).png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonCancelar->SetBitmapHover( wxBitmap( wxT("Imagenes/button_cancelar.png"), wxBITMAP_TYPE_ANY ) );
	bSizer711->Add( BotonCancelar, 0, wxALL, 5 );
	
	
	bSizer64->Add( bSizer711, 0, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer64 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	BotonModificar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModificarHuesped::ClickBotonModificar ), NULL, this );
	BotonCancelar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModificarHuesped::ClickBotonCancelar ), NULL, this );
}

ModificarHuesped::~ModificarHuesped()
{
	// Disconnect Events
	BotonModificar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModificarHuesped::ClickBotonModificar ), NULL, this );
	BotonCancelar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModificarHuesped::ClickBotonCancelar ), NULL, this );
	
}

AgHuesped::AgHuesped( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 660,550 ), wxSize( 660,550 ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	
	wxBoxSizer* bSizer24;
	bSizer24 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer25;
	bSizer25 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("Nombre:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	m_staticText9->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer25->Add( m_staticText9, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextoNombre = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoNombre->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer25->Add( TextoNombre, 1, wxALL, 20 );
	
	
	bSizer24->Add( bSizer25, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer30;
	bSizer30 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText10 = new wxStaticText( this, wxID_ANY, wxT("Apellido:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	m_staticText10->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer30->Add( m_staticText10, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextoApellido = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoApellido->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer30->Add( TextoApellido, 1, wxALL, 20 );
	
	
	bSizer24->Add( bSizer30, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer29;
	bSizer29 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("Email:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	m_staticText11->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer29->Add( m_staticText11, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextoEmail = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoEmail->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer29->Add( TextoEmail, 1, wxALL, 20 );
	
	
	bSizer24->Add( bSizer29, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer28;
	bSizer28 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("Teléfono:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	m_staticText12->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer28->Add( m_staticText12, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextoTelefono = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoTelefono->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer28->Add( TextoTelefono, 1, wxALL, 20 );
	
	
	bSizer24->Add( bSizer28, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer27;
	bSizer27 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText13 = new wxStaticText( this, wxID_ANY, wxT("DNI:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	m_staticText13->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer27->Add( m_staticText13, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextoDNI = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoDNI->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer27->Add( TextoDNI, 1, wxALL, 20 );
	
	
	bSizer24->Add( bSizer27, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer26;
	bSizer26 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText14 = new wxStaticText( this, wxID_ANY, wxT("Fecha nacimiento:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14->Wrap( -1 );
	m_staticText14->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer26->Add( m_staticText14, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextoDia = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoDia->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer26->Add( TextoDia, 1, wxALL, 20 );
	
	TextoMes = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoMes->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer26->Add( TextoMes, 1, wxALL, 20 );
	
	TextoAno = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoAno->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer26->Add( TextoAno, 1, wxALL, 20 );
	
	
	bSizer24->Add( bSizer26, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer291;
	bSizer291 = new wxBoxSizer( wxHORIZONTAL );
	
	BotonAgregarHuesped = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_agregar.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonAgregarHuesped->SetBitmapHover( wxBitmap( wxT("Imagenes/button_agregar hover.png"), wxBITMAP_TYPE_ANY ) );
	bSizer291->Add( BotonAgregarHuesped, 0, wxALL, 5 );
	
	BotonCancelarHuesped = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_cancelar (1).png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonCancelarHuesped->SetBitmapHover( wxBitmap( wxT("Imagenes/button_cancelar.png"), wxBITMAP_TYPE_ANY ) );
	bSizer291->Add( BotonCancelarHuesped, 0, wxALL, 5 );
	
	
	bSizer24->Add( bSizer291, 0, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer24 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	BotonAgregarHuesped->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AgHuesped::ClickBotonAgregarHuesped ), NULL, this );
	BotonCancelarHuesped->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AgHuesped::ClickBotonCancelarHuesped ), NULL, this );
}

AgHuesped::~AgHuesped()
{
	// Disconnect Events
	BotonAgregarHuesped->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AgHuesped::ClickBotonAgregarHuesped ), NULL, this );
	BotonCancelarHuesped->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AgHuesped::ClickBotonCancelarHuesped ), NULL, this );
	
}

mTransacciones::mTransacciones( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 585,665 ), wxSize( 585,665 ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	
	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer32;
	bSizer32 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer34;
	bSizer34 = new wxBoxSizer( wxHORIZONTAL );
	
	m_bitmap6 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Imagenes/Signo peso.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer34->Add( m_bitmap6, 0, wxALL, 5 );
	
	DineroAcumulado = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	DineroAcumulado->Wrap( -1 );
	DineroAcumulado->SetFont( wxFont( 20, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	DineroAcumulado->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_3DLIGHT ) );
	DineroAcumulado->SetBackgroundColour( wxColour( 13, 27, 42 ) );
	
	bSizer34->Add( DineroAcumulado, 0, wxALL|wxALIGN_CENTER_VERTICAL, 10 );
	
	
	bSizer32->Add( bSizer34, 0, 0, 0 );
	
	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText23 = new wxStaticText( this, wxID_ANY, wxT("Alias:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	m_staticText23->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer36->Add( m_staticText23, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	LabelAlias = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	LabelAlias->Wrap( -1 );
	LabelAlias->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer36->Add( LabelAlias, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	BotonCambiarAlias = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_cambiar hover.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonCambiarAlias->SetBitmapHover( wxBitmap( wxT("Imagenes/button_cambiar.png"), wxBITMAP_TYPE_ANY ) );
	bSizer36->Add( BotonCambiarAlias, 0, wxALL, 5 );
	
	
	bSizer32->Add( bSizer36, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer35;
	bSizer35 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText25 = new wxStaticText( this, wxID_ANY, wxT("CBU:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText25->Wrap( -1 );
	m_staticText25->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer35->Add( m_staticText25, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	LabelCBU = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	LabelCBU->Wrap( -1 );
	LabelCBU->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer35->Add( LabelCBU, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	BotonCambiarCBU = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_cambiar hover.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonCambiarCBU->SetBitmapHover( wxBitmap( wxT("Imagenes/button_cambiar.png"), wxBITMAP_TYPE_ANY ) );
	bSizer35->Add( BotonCambiarCBU, 0, wxALL, 5 );
	
	
	bSizer32->Add( bSizer35, 0, wxEXPAND, 5 );
	
	
	bSizer31->Add( bSizer32, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer311;
	bSizer311 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText28 = new wxStaticText( this, wxID_ANY, wxT("Actividad reciente"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText28->Wrap( -1 );
	m_staticText28->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Impact") ) );
	
	bSizer311->Add( m_staticText28, 0, wxALL, 5 );
	
	
	bSizer31->Add( bSizer311, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer33;
	bSizer33 = new wxBoxSizer( wxHORIZONTAL );
	
	DescargarHistorial = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_descargar-historial.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	DescargarHistorial->SetBitmapHover( wxBitmap( wxT("Imagenes/button_descargar-historial (1).png"), wxBITMAP_TYPE_ANY ) );
	bSizer33->Add( DescargarHistorial, 0, wxALL, 5 );
	
	BotonAgregarTransaccion = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_agregar.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonAgregarTransaccion->SetBitmapHover( wxBitmap( wxT("Imagenes/button_agregar hover.png"), wxBITMAP_TYPE_ANY ) );
	bSizer33->Add( BotonAgregarTransaccion, 0, wxALL, 5 );
	
	
	bSizer31->Add( bSizer33, 0, wxALIGN_RIGHT, 5 );
	
	wxBoxSizer* bSizer42;
	bSizer42 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer96;
	bSizer96 = new wxBoxSizer( wxVERTICAL );
	
	PanelFecha = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer97;
	bSizer97 = new wxBoxSizer( wxHORIZONTAL );
	
	wxString SeleccionRapidaChoices[] = { wxT("Hoy"), wxT("ultima semana"), wxT("ultimo mes"), wxT("ultimos 3 meses") };
	int SeleccionRapidaNChoices = sizeof( SeleccionRapidaChoices ) / sizeof( wxString );
	SeleccionRapida = new wxChoice( PanelFecha, wxID_ANY, wxDefaultPosition, wxDefaultSize, SeleccionRapidaNChoices, SeleccionRapidaChoices, 0 );
	SeleccionRapida->SetSelection( 1 );
	SeleccionRapida->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer97->Add( SeleccionRapida, 0, wxALL, 5 );
	
	CFiltro = new wxCheckBox( PanelFecha, wxID_ANY, wxT("Filtrar"), wxDefaultPosition, wxDefaultSize, 0 );
	CFiltro->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer97->Add( CFiltro, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	PanelFecha->SetSizer( bSizer97 );
	PanelFecha->Layout();
	bSizer97->Fit( PanelFecha );
	bSizer96->Add( PanelFecha, 0, wxALL, 5 );
	
	
	bSizer42->Add( bSizer96, 0, 0, 5 );
	
	GrillaActividad = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	GrillaActividad->CreateGrid( 0, 2 );
	GrillaActividad->EnableEditing( true );
	GrillaActividad->EnableGridLines( true );
	GrillaActividad->EnableDragGridSize( false );
	GrillaActividad->SetMargins( 0, 0 );
	
	// Columns
	GrillaActividad->SetColSize( 0, 159 );
	GrillaActividad->SetColSize( 1, 356 );
	GrillaActividad->EnableDragColMove( false );
	GrillaActividad->EnableDragColSize( true );
	GrillaActividad->SetColLabelSize( 0 );
	GrillaActividad->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	GrillaActividad->EnableDragRowSize( true );
	GrillaActividad->SetRowLabelSize( 0 );
	GrillaActividad->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	GrillaActividad->SetDefaultCellFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	GrillaActividad->SetDefaultCellAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	bSizer42->Add( GrillaActividad, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer31->Add( bSizer42, 1, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	this->SetSizer( bSizer31 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	BotonCambiarAlias->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( mTransacciones::ClickBotonCambiarAlias ), NULL, this );
	BotonCambiarCBU->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( mTransacciones::ClickBotonCambiarCBU ), NULL, this );
	DescargarHistorial->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( mTransacciones::ClickDescargarHistorial ), NULL, this );
	BotonAgregarTransaccion->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( mTransacciones::ClickBotonAgregarTransaccion ), NULL, this );
	CFiltro->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( mTransacciones::CFiltroOn ), NULL, this );
}

mTransacciones::~mTransacciones()
{
	// Disconnect Events
	BotonCambiarAlias->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( mTransacciones::ClickBotonCambiarAlias ), NULL, this );
	BotonCambiarCBU->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( mTransacciones::ClickBotonCambiarCBU ), NULL, this );
	DescargarHistorial->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( mTransacciones::ClickDescargarHistorial ), NULL, this );
	BotonAgregarTransaccion->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( mTransacciones::ClickBotonAgregarTransaccion ), NULL, this );
	CFiltro->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( mTransacciones::CFiltroOn ), NULL, this );
	
}

AgTransaccion::AgTransaccion( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	
	wxBoxSizer* bSizer43;
	bSizer43 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer44;
	bSizer44 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText31 = new wxStaticText( this, wxID_ANY, wxT("Monto"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText31->Wrap( -1 );
	m_staticText31->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer44->Add( m_staticText31, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	TextoMonto = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoMonto->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer44->Add( TextoMonto, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer78;
	bSizer78 = new wxBoxSizer( wxVERTICAL );
	
	wxString SelectorChoices[] = { wxT("Ingreso"), wxT("Egreso") };
	int SelectorNChoices = sizeof( SelectorChoices ) / sizeof( wxString );
	Selector = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, SelectorNChoices, SelectorChoices, 0 );
	Selector->SetSelection( 0 );
	Selector->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	Selector->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTIONTEXT ) );
	Selector->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	
	bSizer78->Add( Selector, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer44->Add( bSizer78, 1, wxEXPAND, 5 );
	
	
	bSizer43->Add( bSizer44, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer45;
	bSizer45 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText32 = new wxStaticText( this, wxID_ANY, wxT("Motivo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32->Wrap( -1 );
	m_staticText32->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer45->Add( m_staticText32, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	TextoMotivo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoMotivo->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer45->Add( TextoMotivo, 0, wxALL|wxEXPAND, 5 );
	
	
	bSizer43->Add( bSizer45, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer46;
	bSizer46 = new wxBoxSizer( wxHORIZONTAL );
	
	BotonAgregar = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_agregar.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonAgregar->SetBitmapHover( wxBitmap( wxT("Imagenes/button_agregar hover.png"), wxBITMAP_TYPE_ANY ) );
	bSizer46->Add( BotonAgregar, 0, wxALL, 5 );
	
	BotonCancelar = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_cancelar (1).png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonCancelar->SetBitmapHover( wxBitmap( wxT("Imagenes/button_cancelar.png"), wxBITMAP_TYPE_ANY ) );
	bSizer46->Add( BotonCancelar, 0, wxALL, 5 );
	
	
	bSizer43->Add( bSizer46, 0, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer43 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	BotonAgregar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AgTransaccion::ClickBotonAgregar ), NULL, this );
	BotonCancelar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AgTransaccion::ClickBotonCancelar ), NULL, this );
}

AgTransaccion::~AgTransaccion()
{
	// Disconnect Events
	BotonAgregar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AgTransaccion::ClickBotonAgregar ), NULL, this );
	BotonCancelar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AgTransaccion::ClickBotonCancelar ), NULL, this );
	
}

LoginTransacciones::LoginTransacciones( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	
	wxBoxSizer* bSizer37;
	bSizer37 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer38;
	bSizer38 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText30 = new wxStaticText( this, wxID_ANY, wxT("Clave de acceso"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText30->Wrap( -1 );
	m_staticText30->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	m_staticText30->SetForegroundColour( wxColour( 65, 90, 119 ) );
	m_staticText30->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	
	bSizer38->Add( m_staticText30, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer37->Add( bSizer38, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer39;
	bSizer39 = new wxBoxSizer( wxVERTICAL );
	
	TextoContrasena = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PASSWORD);
	TextoContrasena->SetForegroundColour(*wxBLACK); 
	TextoContrasena->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_3DLIGHT)); 
	
	TextoContrasena->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer39->Add( TextoContrasena, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 12 );
	
	
	bSizer37->Add( bSizer39, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer41;
	bSizer41 = new wxBoxSizer( wxHORIZONTAL );
	
	BotonLoginAceptar = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_ingresar.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonLoginAceptar->SetBitmapHover( wxBitmap( wxT("Imagenes/button_ingresar hover.png"), wxBITMAP_TYPE_ANY ) );
	bSizer41->Add( BotonLoginAceptar, 0, wxALL, 5 );
	
	m_button34 = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_cambiar.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	m_button34->SetBitmapHover( wxBitmap( wxT("Imagenes/button_cambiar hover.png"), wxBITMAP_TYPE_ANY ) );
	bSizer41->Add( m_button34, 0, wxALL, 5 );
	
	BotonLoginAtras = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_atras.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonLoginAtras->SetBitmapHover( wxBitmap( wxT("Imagenes/button_atras hover.png"), wxBITMAP_TYPE_ANY ) );
	bSizer41->Add( BotonLoginAtras, 0, wxALL, 5 );
	
	
	bSizer37->Add( bSizer41, 0, wxALIGN_CENTER_HORIZONTAL, 0 );
	
	
	this->SetSizer( bSizer37 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	BotonLoginAceptar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LoginTransacciones::ClickBotonIngresarTransacciones ), NULL, this );
	m_button34->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LoginTransacciones::BotonCambiarClave ), NULL, this );
	BotonLoginAtras->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LoginTransacciones::BotonAtrasaLogin ), NULL, this );
}

LoginTransacciones::~LoginTransacciones()
{
	// Disconnect Events
	BotonLoginAceptar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LoginTransacciones::ClickBotonIngresarTransacciones ), NULL, this );
	m_button34->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LoginTransacciones::BotonCambiarClave ), NULL, this );
	BotonLoginAtras->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LoginTransacciones::BotonAtrasaLogin ), NULL, this );
	
}

CamClave::CamClave( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	
	wxBoxSizer* bSizer73;
	bSizer73 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer74;
	bSizer74 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText57 = new wxStaticText( this, wxID_ANY, wxT("Clave actual"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText57->Wrap( -1 );
	m_staticText57->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	m_staticText57->SetForegroundColour( wxColour( 65, 90, 119 ) );
	
	bSizer74->Add( m_staticText57, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	TextoClaveActual = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoClaveActual->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer74->Add( TextoClaveActual, 0, wxALL, 5 );
	
	
	bSizer73->Add( bSizer74, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer76;
	bSizer76 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText59 = new wxStaticText( this, wxID_ANY, wxT("      Nueva clave      "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText59->Wrap( -1 );
	m_staticText59->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	m_staticText59->SetForegroundColour( wxColour( 65, 90, 119 ) );
	
	bSizer76->Add( m_staticText59, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	TextoNuevaClave = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoNuevaClave->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer76->Add( TextoNuevaClave, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer73->Add( bSizer76, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer75;
	bSizer75 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText60 = new wxStaticText( this, wxID_ANY, wxT("Repetir nueva clave"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText60->Wrap( -1 );
	m_staticText60->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	m_staticText60->SetForegroundColour( wxColour( 65, 90, 119 ) );
	
	bSizer75->Add( m_staticText60, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	TextoRepetirClave = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoRepetirClave->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer75->Add( TextoRepetirClave, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer73->Add( bSizer75, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer77;
	bSizer77 = new wxBoxSizer( wxHORIZONTAL );
	
	BotonAcepar = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_aceptar.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonAcepar->SetBitmapHover( wxBitmap( wxT("Imagenes/button_aceptar (3).png"), wxBITMAP_TYPE_ANY ) );
	bSizer77->Add( BotonAcepar, 0, wxALL, 5 );
	
	m_bpButton30 = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_cancelar (1).png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	m_bpButton30->SetBitmapHover( wxBitmap( wxT("Imagenes/button_cancelar.png"), wxBITMAP_TYPE_ANY ) );
	bSizer77->Add( m_bpButton30, 0, wxALL, 5 );
	
	
	bSizer73->Add( bSizer77, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	this->SetSizer( bSizer73 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	BotonAcepar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CamClave::ClickBotonAceparNuevaClave ), NULL, this );
	m_bpButton30->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CamClave::ClickBotonCancelarClave ), NULL, this );
}

CamClave::~CamClave()
{
	// Disconnect Events
	BotonAcepar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CamClave::ClickBotonAceparNuevaClave ), NULL, this );
	m_bpButton30->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CamClave::ClickBotonCancelarClave ), NULL, this );
	
}

ModificarHabitacion::ModificarHabitacion( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	
	wxBoxSizer* bSizer45;
	bSizer45 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer46;
	bSizer46 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText24 = new wxStaticText( this, wxID_ANY, wxT("Número actual:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText24->Wrap( -1 );
	m_staticText24->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer46->Add( m_staticText24, 0, wxALL, 5 );
	
	TextoNumeroActual = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoNumeroActual->Wrap( -1 );
	TextoNumeroActual->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer46->Add( TextoNumeroActual, 0, wxALL, 5 );
	
	
	bSizer45->Add( bSizer46, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer50;
	bSizer50 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText25 = new wxStaticText( this, wxID_ANY, wxT("Nuevo número:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText25->Wrap( -1 );
	m_staticText25->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer50->Add( m_staticText25, 0, wxALL, 5 );
	
	textoNuevoNumero = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	textoNuevoNumero->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer50->Add( textoNuevoNumero, 1, wxALL, 5 );
	
	
	bSizer45->Add( bSizer50, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer49;
	bSizer49 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText26 = new wxStaticText( this, wxID_ANY, wxT("Tipo actual:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText26->Wrap( -1 );
	m_staticText26->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer49->Add( m_staticText26, 0, wxALL, 5 );
	
	TextoTipoActual = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoTipoActual->Wrap( -1 );
	TextoTipoActual->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer49->Add( TextoTipoActual, 0, wxALL, 5 );
	
	
	bSizer45->Add( bSizer49, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer48;
	bSizer48 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText27 = new wxStaticText( this, wxID_ANY, wxT("Nuevo tipo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText27->Wrap( -1 );
	m_staticText27->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer48->Add( m_staticText27, 0, wxALL, 5 );
	
	textoNuevoTipo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	textoNuevoTipo->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer48->Add( textoNuevoTipo, 1, wxALL, 5 );
	
	
	bSizer45->Add( bSizer48, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer47;
	bSizer47 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText28 = new wxStaticText( this, wxID_ANY, wxT("Precio actual:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText28->Wrap( -1 );
	m_staticText28->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer47->Add( m_staticText28, 0, wxALL, 5 );
	
	TextoPrecioActual = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoPrecioActual->Wrap( -1 );
	TextoPrecioActual->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer47->Add( TextoPrecioActual, 0, wxALL, 5 );
	
	
	bSizer45->Add( bSizer47, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer51;
	bSizer51 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText29 = new wxStaticText( this, wxID_ANY, wxT("Nuevo precio:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText29->Wrap( -1 );
	m_staticText29->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	
	bSizer51->Add( m_staticText29, 0, wxALL, 5 );
	
	textoNuevoPrecio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	textoNuevoPrecio->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer51->Add( textoNuevoPrecio, 1, wxALL, 5 );
	
	
	bSizer45->Add( bSizer51, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer53;
	bSizer53 = new wxBoxSizer( wxHORIZONTAL );
	
	BotonAceptarModificar = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_aceptar.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonAceptarModificar->SetBitmapHover( wxBitmap( wxT("Imagenes/button_aceptar (3).png"), wxBITMAP_TYPE_ANY ) );
	bSizer53->Add( BotonAceptarModificar, 0, wxALL, 5 );
	
	BotonCancelarModificar = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_cancelar (1).png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonCancelarModificar->SetBitmapHover( wxBitmap( wxT("Imagenes/button_cancelar.png"), wxBITMAP_TYPE_ANY ) );
	bSizer53->Add( BotonCancelarModificar, 0, wxALL, 5 );
	
	
	bSizer45->Add( bSizer53, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	this->SetSizer( bSizer45 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	BotonAceptarModificar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModificarHabitacion::ClickBotonAceptar ), NULL, this );
	BotonCancelarModificar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModificarHabitacion::ClickBotonCancelar ), NULL, this );
}

ModificarHabitacion::~ModificarHabitacion()
{
	// Disconnect Events
	BotonAceptarModificar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModificarHabitacion::ClickBotonAceptar ), NULL, this );
	BotonCancelarModificar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModificarHabitacion::ClickBotonCancelar ), NULL, this );
	
}

Alias::Alias( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	
	wxBoxSizer* bSizer53;
	bSizer53 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer54;
	bSizer54 = new wxBoxSizer( wxVERTICAL );
	
	NuevoAlias = new wxStaticText( this, wxID_ANY, wxT("Nuevo Alias"), wxDefaultPosition, wxDefaultSize, 0 );
	NuevoAlias->Wrap( -1 );
	NuevoAlias->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	NuevoAlias->SetForegroundColour( wxColour( 65, 90, 119 ) );
	
	bSizer54->Add( NuevoAlias, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	TextoNuevoAlias = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoNuevoAlias->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer54->Add( TextoNuevoAlias, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer53->Add( bSizer54, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer55;
	bSizer55 = new wxBoxSizer( wxHORIZONTAL );
	
	BotonAceptarNuevoAlias = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_aceptar.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonAceptarNuevoAlias->SetBitmapHover( wxBitmap( wxT("Imagenes/button_aceptar (3).png"), wxBITMAP_TYPE_ANY ) );
	bSizer55->Add( BotonAceptarNuevoAlias, 0, wxALL, 5 );
	
	BotonCancelarNuevoAlias = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_cancelar (1).png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonCancelarNuevoAlias->SetBitmapHover( wxBitmap( wxT("Imagenes/button_cancelar.png"), wxBITMAP_TYPE_ANY ) );
	bSizer55->Add( BotonCancelarNuevoAlias, 0, wxALL, 5 );
	
	
	bSizer53->Add( bSizer55, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	this->SetSizer( bSizer53 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	BotonAceptarNuevoAlias->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Alias::ClickBotonAceptarNuevoAlias ), NULL, this );
	BotonCancelarNuevoAlias->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Alias::ClickBotonCancelarNuevoAlias ), NULL, this );
}

Alias::~Alias()
{
	// Disconnect Events
	BotonAceptarNuevoAlias->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Alias::ClickBotonAceptarNuevoAlias ), NULL, this );
	BotonCancelarNuevoAlias->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Alias::ClickBotonCancelarNuevoAlias ), NULL, this );
	
}

CBU::CBU( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	
	wxBoxSizer* bSizer54;
	bSizer54 = new wxBoxSizer( wxVERTICAL );
	
	NuevoCBU = new wxStaticText( this, wxID_ANY, wxT("Nuevo CBU"), wxDefaultPosition, wxDefaultSize, 0 );
	NuevoCBU->Wrap( -1 );
	NuevoCBU->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Impact") ) );
	NuevoCBU->SetForegroundColour( wxColour( 65, 90, 119 ) );
	
	bSizer54->Add( NuevoCBU, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	TextoNuevoCBU = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	TextoNuevoCBU->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial Rounded MT Bold") ) );
	
	bSizer54->Add( TextoNuevoCBU, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer55;
	bSizer55 = new wxBoxSizer( wxHORIZONTAL );
	
	BotonAceptarNuevoCBU = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_aceptar.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonAceptarNuevoCBU->SetBitmapHover( wxBitmap( wxT("Imagenes/button_aceptar (3).png"), wxBITMAP_TYPE_ANY ) );
	bSizer55->Add( BotonAceptarNuevoCBU, 0, wxALL, 5 );
	
	BotonCancelarNuevoCBU = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("Imagenes/button_cancelar (1).png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	
	BotonCancelarNuevoCBU->SetBitmapHover( wxBitmap( wxT("Imagenes/button_cancelar.png"), wxBITMAP_TYPE_ANY ) );
	bSizer55->Add( BotonCancelarNuevoCBU, 0, wxALL, 5 );
	
	
	bSizer54->Add( bSizer55, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	this->SetSizer( bSizer54 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	BotonAceptarNuevoCBU->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CBU::ClickBotonAceptarNuevoCBU ), NULL, this );
	BotonCancelarNuevoCBU->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CBU::ClickBotonCancelarNuevoCBU ), NULL, this );
}

CBU::~CBU()
{
	// Disconnect Events
	BotonAceptarNuevoCBU->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CBU::ClickBotonAceptarNuevoCBU ), NULL, this );
	BotonCancelarNuevoCBU->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CBU::ClickBotonCancelarNuevoCBU ), NULL, this );
	
}
