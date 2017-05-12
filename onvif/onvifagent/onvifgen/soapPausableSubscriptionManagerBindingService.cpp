/* soapPausableSubscriptionManagerBindingService.cpp
   Generated by gSOAP 2.7.17 from onvif.h
   Copyright(C) 2000-2010, Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
*/

#include "soapPausableSubscriptionManagerBindingService.h"

PausableSubscriptionManagerBindingService::PausableSubscriptionManagerBindingService()
{	PausableSubscriptionManagerBindingService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

PausableSubscriptionManagerBindingService::PausableSubscriptionManagerBindingService(const struct soap &_soap) :soap(_soap)
{ }

PausableSubscriptionManagerBindingService::PausableSubscriptionManagerBindingService(soap_mode iomode)
{	PausableSubscriptionManagerBindingService_init(iomode, iomode);
}

PausableSubscriptionManagerBindingService::PausableSubscriptionManagerBindingService(soap_mode imode, soap_mode omode)
{	PausableSubscriptionManagerBindingService_init(imode, omode);
}

PausableSubscriptionManagerBindingService::~PausableSubscriptionManagerBindingService()
{ }

void PausableSubscriptionManagerBindingService::PausableSubscriptionManagerBindingService_init(soap_mode imode, soap_mode omode)
{	soap_imode(this, imode);
	soap_omode(this, omode);
	static const struct Namespace namespaces[] =
{
	{"SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://schemas.xmlsoap.org/soap/envelope/", NULL},
	{"SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://schemas.xmlsoap.org/soap/encoding/", NULL},
	{"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
	{"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
	{"c14n", "http://www.w3.org/2001/10/xml-exc-c14n#", NULL, NULL},
	{"wsu", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-utility-1.0.xsd", NULL, NULL},
	{"ds", "http://www.w3.org/2000/09/xmldsig#", NULL, NULL},
	{"wsse", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-secext-1.0.xsd", "http://docs.oasis-open.org/wss/oasis-wss-wssecurity-secext-1.1.xsd", NULL},
	{"wsa5", "http://www.w3.org/2005/08/addressing", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL},
	{"ns1", "http://schemas.xmlsoap.org/ws/2005/04/discovery", NULL, NULL},
	{"xmime", "http://tempuri.org/xmime.xsd", NULL, NULL},
	{"xop", "http://www.w3.org/2004/08/xop/include", NULL, NULL},
	{"tt", "http://www.onvif.org/ver10/schema", NULL, NULL},
	{"wsrfbf", "http://docs.oasis-open.org/wsrf/bf-2", NULL, NULL},
	{"wsa", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL, NULL},
	{"wstop", "http://docs.oasis-open.org/wsn/t-1", NULL, NULL},
	{"wsrfr", "http://docs.oasis-open.org/wsrf/r-2", NULL, NULL},
	{"ns10", "http://www.onvif.org/ver10/network/wsdl/RemoteDiscoveryBinding", NULL, NULL},
	{"ns11", "http://www.onvif.org/ver10/network/wsdl/DiscoveryLookupBinding", NULL, NULL},
	{"tdn", "http://www.onvif.org/ver10/network/wsdl", NULL, NULL},
	{"ns2", "http://www.onvif.org/ver10/events/wsdl/PullPointSubscriptionBinding", NULL, NULL},
	{"ns3", "http://www.onvif.org/ver10/events/wsdl/EventBinding", NULL, NULL},
	{"tev", "http://www.onvif.org/ver10/events/wsdl", NULL, NULL},
	{"ns4", "http://www.onvif.org/ver10/events/wsdl/SubscriptionManagerBinding", NULL, NULL},
	{"ns5", "http://www.onvif.org/ver10/events/wsdl/NotificationProducerBinding", NULL, NULL},
	{"ns6", "http://www.onvif.org/ver10/events/wsdl/NotificationConsumerBinding", NULL, NULL},
	{"ns7", "http://www.onvif.org/ver10/events/wsdl/PullPointBinding", NULL, NULL},
	{"ns8", "http://www.onvif.org/ver10/events/wsdl/CreatePullPointBinding", NULL, NULL},
	{"ns9", "http://www.onvif.org/ver10/events/wsdl/PausableSubscriptionManagerBinding", NULL, NULL},
	{"wsnt", "http://docs.oasis-open.org/wsn/b-2", NULL, NULL},
	{"tds", "http://www.onvif.org/ver10/device/wsdl", NULL, NULL},
	{"timg", "http://www.onvif.org/ver20/imaging/wsdl", NULL, NULL},
	{"tls", "http://www.onvif.org/ver10/display/wsdl", NULL, NULL},
	{"tmd", "http://www.onvif.org/ver10/deviceIO/wsdl", NULL, NULL},
	{"tptz", "http://www.onvif.org/ver20/ptz/wsdl", NULL, NULL},
	{"trc", "http://www.onvif.org/ver10/recording/wsdl", NULL, NULL},
	{"trp", "http://www.onvif.org/ver10/replay/wsdl", NULL, NULL},
	{"trt", "http://www.onvif.org/ver10/media/wsdl", NULL, NULL},
	{"trv", "http://www.onvif.org/ver10/receiver/wsdl", NULL, NULL},
	{"tse", "http://www.onvif.org/ver10/search/wsdl", NULL, NULL},
	{NULL, NULL, NULL, NULL}
};
	this->namespaces = namespaces;
};

void PausableSubscriptionManagerBindingService::destroy()
{	soap_destroy(this);
	soap_end(this);
}

PausableSubscriptionManagerBindingService *PausableSubscriptionManagerBindingService::copy()
{	PausableSubscriptionManagerBindingService *dup = SOAP_NEW_COPY(PausableSubscriptionManagerBindingService(*(struct soap*)this));
	return dup;
}

int PausableSubscriptionManagerBindingService::soap_close_socket()
{	return soap_closesock(this);
}

int PausableSubscriptionManagerBindingService::soap_senderfault(const char *string, const char *detailXML)
{	return ::soap_sender_fault(this, string, detailXML);
}

int PausableSubscriptionManagerBindingService::soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_sender_fault_subcode(this, subcodeQName, string, detailXML);
}

int PausableSubscriptionManagerBindingService::soap_receiverfault(const char *string, const char *detailXML)
{	return ::soap_receiver_fault(this, string, detailXML);
}

int PausableSubscriptionManagerBindingService::soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_receiver_fault_subcode(this, subcodeQName, string, detailXML);
}

void PausableSubscriptionManagerBindingService::soap_print_fault(FILE *fd)
{	::soap_print_fault(this, fd);
}

#ifndef WITH_LEAN
void PausableSubscriptionManagerBindingService::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this, os);
}

char *PausableSubscriptionManagerBindingService::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this, buf, len);
}
#endif

void PausableSubscriptionManagerBindingService::soap_noheader()
{	header = NULL;
}

void PausableSubscriptionManagerBindingService::soap_header(char *wsa__MessageID, struct wsa__Relationship *wsa__RelatesTo, struct wsa__EndpointReferenceType *wsa__From, struct wsa__EndpointReferenceType *wsa__ReplyTo, struct wsa__EndpointReferenceType *wsa__FaultTo, char *wsa__To, char *wsa__Action, struct _wsse__Security *wsse__Security, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action)
{	::soap_header(this);
	this->header->wsa__MessageID = wsa__MessageID;
	this->header->wsa__RelatesTo = wsa__RelatesTo;
	this->header->wsa__From = wsa__From;
	this->header->wsa__ReplyTo = wsa__ReplyTo;
	this->header->wsa__FaultTo = wsa__FaultTo;
	this->header->wsa__To = wsa__To;
	this->header->wsa__Action = wsa__Action;
	this->header->wsse__Security = wsse__Security;
	this->header->wsa5__MessageID = wsa5__MessageID;
	this->header->wsa5__RelatesTo = wsa5__RelatesTo;
	this->header->wsa5__From = wsa5__From;
	this->header->wsa5__ReplyTo = wsa5__ReplyTo;
	this->header->wsa5__FaultTo = wsa5__FaultTo;
	this->header->wsa5__To = wsa5__To;
	this->header->wsa5__Action = wsa5__Action;
}

const SOAP_ENV__Header *PausableSubscriptionManagerBindingService::soap_header()
{	return this->header;
}

int PausableSubscriptionManagerBindingService::run(int port)
{	if (soap_valid_socket(bind(NULL, port, 100)))
	{	for (;;)
		{	if (!soap_valid_socket(accept()))
				return this->error;
			(void)serve();
			soap_destroy(this);
			soap_end(this);
		}
	}
	else
		return this->error;
	return SOAP_OK;
}

SOAP_SOCKET PausableSubscriptionManagerBindingService::bind(const char *host, int port, int backlog)
{	return soap_bind(this, host, port, backlog);
}

SOAP_SOCKET PausableSubscriptionManagerBindingService::accept()
{	return soap_accept(this);
}

int PausableSubscriptionManagerBindingService::serve()
{
#ifndef WITH_FASTCGI
	unsigned int k = this->max_keep_alive;
#endif
	do
	{	soap_begin(this);
#ifdef WITH_FASTCGI
		if (FCGI_Accept() < 0)
		{
			this->error = SOAP_EOF;
			return soap_send_fault(this);
		}
#endif

		soap_begin(this);

#ifndef WITH_FASTCGI
		if (this->max_keep_alive > 0 && !--k)
			this->keep_alive = 0;
#endif

		if (soap_begin_recv(this))
		{	if (this->error < SOAP_STOP)
			{
#ifdef WITH_FASTCGI
				soap_send_fault(this);
#else 
				return soap_send_fault(this);
#endif
			}
			soap_closesock(this);

			continue;
		}

		if (soap_envelope_begin_in(this)
		 || soap_recv_header(this)
		 || soap_body_begin_in(this)
		 || dispatch() || (this->fserveloop && this->fserveloop(this)))
		{
#ifdef WITH_FASTCGI
			soap_send_fault(this);
#else
			return soap_send_fault(this);
#endif
		}

#ifdef WITH_FASTCGI
		soap_destroy(this);
		soap_end(this);
	} while (1);
#else
	} while (this->keep_alive);
#endif
	return SOAP_OK;
}

static int serve___ns9__Renew(PausableSubscriptionManagerBindingService*);
static int serve___ns9__Unsubscribe(PausableSubscriptionManagerBindingService*);
static int serve___ns9__PauseSubscription(PausableSubscriptionManagerBindingService*);
static int serve___ns9__ResumeSubscription(PausableSubscriptionManagerBindingService*);

int PausableSubscriptionManagerBindingService::dispatch()
{	soap_peek_element(this);
	if (!soap_match_tag(this, this->tag, "wsnt:Renew"))
		return serve___ns9__Renew(this);
	if (!soap_match_tag(this, this->tag, "wsnt:Unsubscribe"))
		return serve___ns9__Unsubscribe(this);
	if (!soap_match_tag(this, this->tag, "wsnt:PauseSubscription"))
		return serve___ns9__PauseSubscription(this);
	if (!soap_match_tag(this, this->tag, "wsnt:ResumeSubscription"))
		return serve___ns9__ResumeSubscription(this);
	return this->error = SOAP_NO_METHOD;
}

static int serve___ns9__Renew(PausableSubscriptionManagerBindingService *soap)
{	struct __ns9__Renew soap_tmp___ns9__Renew;
	_wsnt__RenewResponse wsnt__RenewResponse;
	wsnt__RenewResponse.soap_default(soap);
	soap_default___ns9__Renew(soap, &soap_tmp___ns9__Renew);
	soap->encodingStyle = NULL;
	if (!soap_get___ns9__Renew(soap, &soap_tmp___ns9__Renew, "-ns9:Renew", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->Renew(soap_tmp___ns9__Renew.wsnt__Renew, &wsnt__RenewResponse);
	if (soap->error)
		return soap->error;
	soap_serializeheader(soap);
	wsnt__RenewResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || wsnt__RenewResponse.soap_put(soap, "wsnt:RenewResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || wsnt__RenewResponse.soap_put(soap, "wsnt:RenewResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___ns9__Unsubscribe(PausableSubscriptionManagerBindingService *soap)
{	struct __ns9__Unsubscribe soap_tmp___ns9__Unsubscribe;
	_wsnt__UnsubscribeResponse wsnt__UnsubscribeResponse;
	wsnt__UnsubscribeResponse.soap_default(soap);
	soap_default___ns9__Unsubscribe(soap, &soap_tmp___ns9__Unsubscribe);
	soap->encodingStyle = NULL;
	if (!soap_get___ns9__Unsubscribe(soap, &soap_tmp___ns9__Unsubscribe, "-ns9:Unsubscribe", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->Unsubscribe(soap_tmp___ns9__Unsubscribe.wsnt__Unsubscribe, &wsnt__UnsubscribeResponse);
	if (soap->error)
		return soap->error;
	soap_serializeheader(soap);
	wsnt__UnsubscribeResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || wsnt__UnsubscribeResponse.soap_put(soap, "wsnt:UnsubscribeResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || wsnt__UnsubscribeResponse.soap_put(soap, "wsnt:UnsubscribeResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___ns9__PauseSubscription(PausableSubscriptionManagerBindingService *soap)
{	struct __ns9__PauseSubscription soap_tmp___ns9__PauseSubscription;
	_wsnt__PauseSubscriptionResponse wsnt__PauseSubscriptionResponse;
	wsnt__PauseSubscriptionResponse.soap_default(soap);
	soap_default___ns9__PauseSubscription(soap, &soap_tmp___ns9__PauseSubscription);
	soap->encodingStyle = NULL;
	if (!soap_get___ns9__PauseSubscription(soap, &soap_tmp___ns9__PauseSubscription, "-ns9:PauseSubscription", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->PauseSubscription(soap_tmp___ns9__PauseSubscription.wsnt__PauseSubscription, &wsnt__PauseSubscriptionResponse);
	if (soap->error)
		return soap->error;
	soap_serializeheader(soap);
	wsnt__PauseSubscriptionResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || wsnt__PauseSubscriptionResponse.soap_put(soap, "wsnt:PauseSubscriptionResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || wsnt__PauseSubscriptionResponse.soap_put(soap, "wsnt:PauseSubscriptionResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___ns9__ResumeSubscription(PausableSubscriptionManagerBindingService *soap)
{	struct __ns9__ResumeSubscription soap_tmp___ns9__ResumeSubscription;
	_wsnt__ResumeSubscriptionResponse wsnt__ResumeSubscriptionResponse;
	wsnt__ResumeSubscriptionResponse.soap_default(soap);
	soap_default___ns9__ResumeSubscription(soap, &soap_tmp___ns9__ResumeSubscription);
	soap->encodingStyle = NULL;
	if (!soap_get___ns9__ResumeSubscription(soap, &soap_tmp___ns9__ResumeSubscription, "-ns9:ResumeSubscription", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->ResumeSubscription(soap_tmp___ns9__ResumeSubscription.wsnt__ResumeSubscription, &wsnt__ResumeSubscriptionResponse);
	if (soap->error)
		return soap->error;
	soap_serializeheader(soap);
	wsnt__ResumeSubscriptionResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || wsnt__ResumeSubscriptionResponse.soap_put(soap, "wsnt:ResumeSubscriptionResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || wsnt__ResumeSubscriptionResponse.soap_put(soap, "wsnt:ResumeSubscriptionResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}
/* End of server object code */
