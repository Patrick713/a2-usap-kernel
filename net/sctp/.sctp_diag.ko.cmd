cmd_net/sctp/sctp_diag.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sctp/sctp_diag.ko net/sctp/sctp_diag.o net/sctp/sctp_diag.mod.o;  true
