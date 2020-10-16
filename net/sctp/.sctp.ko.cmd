cmd_net/sctp/sctp.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sctp/sctp.ko net/sctp/sctp.o net/sctp/sctp.mod.o;  true
