;; Use tabs for indentation
(setq-default indent-tabs-mode t)
;; Set the width of each tab stop (usually 8)
(setq-default tab-width 8)
;; Always perform indentation when pressing TAB
(setq tab-always-indent 'complete)
;; Set global variables to use tabs
(setq-default indent-tabs-mode t)
(setq-default tab-width 4)  ; Set your desired tab width
(setq-default c-basic-offset 4)
(defun my-c-mode-hook ()
  (setq indent-tabs-mode t)     ;; Use tabs for indentation
  (setq tab-width 4)            ;; Set tab width to 4 spaces
  (setq c-basic-offset 4))      ;; Set indentation level to 4 spaces

(add-hook 'c-mode-hook 'my-c-mode-hook)
