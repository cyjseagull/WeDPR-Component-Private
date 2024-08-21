# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
"""Client and server classes corresponding to protobuf-defined services."""
import grpc

from ppc_common.ppc_protos.generated import ppc_model_pb2 as ppc__model__pb2


class ModelServiceStub(object):
    """Missing associated documentation comment in .proto file."""

    def __init__(self, channel):
        """Constructor.

        Args:
            channel: A grpc.Channel.
        """
        self.MessageInteraction = channel.unary_unary(
            '/ppc.model.ModelService/MessageInteraction',
            request_serializer=ppc__model__pb2.ModelRequest.SerializeToString,
            response_deserializer=ppc__model__pb2.ModelResponse.FromString,
        )


class ModelServiceServicer(object):
    """Missing associated documentation comment in .proto file."""

    def MessageInteraction(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')


def add_ModelServiceServicer_to_server(servicer, server):
    rpc_method_handlers = {
        'MessageInteraction': grpc.unary_unary_rpc_method_handler(
            servicer.MessageInteraction,
            request_deserializer=ppc__model__pb2.ModelRequest.FromString,
            response_serializer=ppc__model__pb2.ModelResponse.SerializeToString,
        ),
    }
    generic_handler = grpc.method_handlers_generic_handler(
        'ppc.model.ModelService', rpc_method_handlers)
    server.add_generic_rpc_handlers((generic_handler,))

 # This class is part of an EXPERIMENTAL API.


class ModelService(object):
    """Missing associated documentation comment in .proto file."""

    @staticmethod
    def MessageInteraction(request,
                           target,
                           options=(),
                           channel_credentials=None,
                           call_credentials=None,
                           insecure=False,
                           compression=None,
                           wait_for_ready=None,
                           timeout=None,
                           metadata=None):
        return grpc.experimental.unary_unary(request, target, '/ppc.model.ModelService/MessageInteraction',
                                             ppc__model__pb2.ModelRequest.SerializeToString,
                                             ppc__model__pb2.ModelResponse.FromString,
                                             options, channel_credentials,
                                             insecure, call_credentials, compression, wait_for_ready, timeout, metadata)