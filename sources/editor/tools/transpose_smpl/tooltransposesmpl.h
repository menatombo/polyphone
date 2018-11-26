#ifndef TOOLTRANSPOSESMPL_H
#define TOOLTRANSPOSESMPL_H

#include "abstracttooliterating.h"
#include <QObject>

class ToolTransposeSmpl: public AbstractToolIterating
{
public:
    ToolTransposeSmpl();

    /// Icon, label and category displayed to the user to describe the tool
    QString getIconName() const override
    {
        return ":/tool/transpose.svg";
    }

    QString getCategory() const override
    {
        return trUtf8("Traitement des échantillons");
    }

    /// Internal identifier
    QString getIdentifier() const override
    {
        return "smpl:transpose";
    }

    /// Process an element
    void process(SoundfontManager * sm, EltID id, AbstractToolParameters * parameters) override;

protected:
    QString getLabelInternal() const override
    {
        return trUtf8("Transposer");
    }
};

#endif // TOOLTRANSPOSESMPL_H
